#pragma once
template <typename T>
class Frankenstein_List
{
private:
	struct Node
	{
		T value;
		Node* next;
		Node* prev;
		Node* nextMax;
		Node* prevMin;
		Node(T val) : value(val), next(nullptr), prev(nullptr), nextMax(nullptr), prevMin(nullptr) {}
	};
	Node* head;
	Node* tail;
	Node* asc;
	Node* desc;
	unsigned int m_size;
public:
	class iterator
	{
	private:
		Node* it;
	public:
		iterator() : it(head) {}
		iterator(Node* node) : it(node)	{}
		iterator& operator=(const iterator& other)
		{
			if (this != &other)
			{
				it = other.it;
			}
			return *this;
		}
		iterator operator++(int)
		{
			iterator temp(it);
			it = it->nextMax;
			return temp;
		}
		iterator& operator++()
		{
			it = it->next;
			return *this;
		}
		iterator operator--(int)
		{
			iterator temp(it);
			it = it->prevMin;
			return temp;
		}
		iterator& operator--()
		{
			it = it->prev;
			return *this;
		}
		T operator*()
		{
			return it->value;
		}
		bool operator==(const iterator& other)
		{
			return it == other.it;
		}
		bool operator!=(const iterator& other)
		{
			return it != other.it;
		}
		
	};
	Frankenstein_List() : head(nullptr), tail(nullptr), asc(nullptr), desc(nullptr), m_size(0) {}
	Frankenstein_List(const Frankenstein_List& other)
	{
		Node* temp = other.head;
		while (temp != nullptr)
		{
			push_back(temp->value);
			temp = temp->next;
		}
		m_size = other.m_size;
	}
	Frankenstein_List& operator=(const Frankenstein_List& other)
	{
		if (this != &other)
		{
			__clear(head);
			m_size = other.m_size;
			Node* temp = other.head;
			while (temp != nullptr)
			{
				push_back(temp->value);
				temp = temp->next;
			}
		}
		return *this;
	}
	~Frankenstein_List()
	{
		__clear(head);
	}
	iterator begin()
	{
		return iterator(head);
	}
	iterator end()
	{
		return iterator(nullptr);
	}
	iterator min()
	{
		return iterator(desc);
	}
	iterator max()
	{
		return iterator(asc);
	}
	int size() const
	{
		return m_size;
	}
	bool empty() const
	{
		return m_size;
	}
	void push_back(const T& val)
	{
		if (head == nullptr)
		{
			Node * first = new Node(val);
			head = first;
			tail = first;
			asc = first;
			desc = first;
			++m_size;
			return;
		}
		Node* node = new Node(val);
		tail->next = node;
		node->prev = tail;
		tail = node;
		++m_size;
		__push_sorted(node);
	}
	void push_front(const T& val)
	{
		if (head == nullptr)
		{
			Node* first = new Node(val);
			head = first;
			tail = first;
			asc = first;
			desc = first;
			++m_size;
			return;
		}
		Node* node = new Node(val);
		node->next = head;
		head->prev = node;
		head = node;
		++m_size;
		__push_sorted(node);
	}
	void pop_back()
	{
		if (m_size == 1)
		{
			__to_null();
			return;
		}
		tail = tail->prev;
		__erase_by_ascending(tail->next);
		tail->next = nullptr;
		--m_size;
	}
	void pop_front()
	{
		if (m_size == 1)
		{
			__to_null();
			return;
		}
		head = head->next;
		__erase_by_ascending(head->prev);
		head->prev = nullptr;
		--m_size;
	}
	void erase(int index)
	{
		__exeption_out_of_range(index);
		if (index == 0)
		{
			pop_front();
			return;
		}
		if (index == m_size - 1)
		{
			pop_back();
			return;
		}
		Node* prev = head;
		Node* curr = head->next;
		for (int i = 1; i < m_size - 1; ++i)
		{
			if (index == i)
			{
				break;
			}
			prev = prev->next;
			curr = curr->next;
		}
		prev->next = curr->next;
		curr->next->prev = prev;
		__erase_by_ascending(curr);
	}
	void insert(unsigned int position, const T& item)
	{
		if (position != m_size)
		{
			__exeption_out_of_range(position);
		}
		if (position == 0)
		{
			push_front(item);
			return;
		}
		if (position == m_size)
		{
			push_back(item);
			return;
		}
		Node* curr = head;
		Node* curNext = head->next;
		for (int i = 1; i < m_size; ++i)
		{
			if (position == i)
			{
				break;
			}
			curr = curr->next;
			curNext = curNext->next;
		}
		Node* newItem = new Node(item);
		newItem->prev = curr;
		newItem->next = curNext;
		curr->next = newItem;
		curNext->prev = newItem;
		++m_size;
		__push_sorted(newItem);
	}
	void clear()
	{
		__clear(head);
	}
	void reverse()
	{
		__reverse(head);
	}

private:
	void __to_null()
	{
		delete head;
		--m_size;
		head = nullptr;
		tail = nullptr;
		desc = nullptr;
		asc = nullptr;
	}
	void __exeption_out_of_range(unsigned int index)
	{
		if (index < 0 || index >= m_size)
		{
			throw std::out_of_range("Out of Range");
		}
	}
	void __push_sorted(Node* node)
	{
		if (node->value > asc->value)
		{
			asc->nextMax = node;
			node->prevMin = asc;
			asc = node;
			return;
		}
		if (node->value < desc->value)
		{
			node->nextMax = desc;
			desc->prevMin = node;
			desc = node;
			return;
		}
		Node* curr = desc;
		while (curr->nextMax != nullptr)
		{
			if (curr->nextMax->value > node->value)
			{
				node->nextMax = curr->nextMax;
				node->prevMin = curr;
				curr->nextMax->prevMin = node;
				curr->nextMax = node;
				return;
			}
			curr = curr->nextMax;
		}
	}
	void __erase_by_ascending(Node* node)
	{
		if (node->nextMax == nullptr)
		{
			asc = asc->prevMin;
			delete asc->nextMax;
			asc->nextMax = nullptr;
			return;

		}
		if (node->prevMin == nullptr)
		{
			desc = desc->nextMax;
			delete desc->prevMin;
			desc->prevMin = nullptr;
			return;
		}
		Node* temp = node->prevMin;
		node->prevMin->nextMax = node->nextMax;
		delete node;
		temp->nextMax->prevMin = temp;
	}
	void __clear(Node*& curr)
	{
		if (curr == nullptr)
		{
			return;
		}
		__clear(curr->next);
		delete curr;
		--m_size;
		curr = nullptr;
		tail = nullptr;
		desc = nullptr;
		asc = nullptr;
	}
	void __reverse(Node* head)
	{
		if (head)
		{
			std::swap(head->next, head->prev);
			__reverse(head->prev);
			return;
		}
		std::swap(this->head, tail);
	}
};