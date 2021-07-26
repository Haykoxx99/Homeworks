#pragma once
#include <iostream>
#include <initializer_list>
template <typename T>
class My_List
{
private:
	struct Node
	{
		T m_value;
		Node* next;

		Node() : next(nullptr) {}
		Node(T value) : m_value(value), next(nullptr) {}
	};
	Node* head;
	unsigned int m_size;
public:
	My_List() : head(nullptr), m_size(0) {}
	My_List(std::initializer_list<T> list)
	{
		for (auto it:list)
		{
			push_back(it);
		}
	}
	My_List(const My_List& other)
	{
		if (other.head == nullptr)
		{
			head = nullptr;
			m_size = other.m_size;
			return;
		}
		Node* temp = other.head;
		__copy_ctor_push_front(temp);
		m_size = other.m_size;
	}
	My_List& operator=(const My_List& other)
	{
		if (this != &other)
		{
			__clear(head);
			Node* temp = other.head;
			__copy_ctor_push_front(temp);
			m_size = other.m_size;
		}
		return *this;
	}
	~My_List()
	{
		__clear(head);
	}
public:
	int size() const
	{
		return m_size;
	}
	T& get(unsigned int position) const
	{
		__exception_out_of_range(position);
		Node* curr = head;
		for (unsigned int i = 0; i < m_size; ++i)
		{
			if (i == position)
			{
		        return curr->m_value;
			}
			curr = curr->next;
		}
	}
	bool empty() const
	{
		return m_size;
	}
	void pop_back()
	{
		if (head == nullptr)
		{
			return;
		}
		else if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			m_size = 0;
			return;
		}
		else
		{
			Node* tempHead = head;
			Node* temp = head->next;
			for (unsigned int i = 0; i < m_size; ++i)
			{
				if (temp->next == nullptr)
				{
					delete temp;
					tempHead->next = nullptr;
					--m_size;
					return;
				}
				tempHead = tempHead->next;
				temp = temp->next;
			}
		}
	}
	void pop_front()
	{
		if (head == nullptr)
		{
			return;
		}
		else if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			m_size = 0;
			return;
		}
		else
		{
			Node* temp = head->next;
			delete head;
			head = temp;
			--m_size;
		}
	}
	void erase(unsigned int position)
	{
		__exception_out_of_range(position);
		if (position == 0)
		{
			pop_front();
			return;
		}
		else if (position == m_size - 1)
		{
			pop_back();
			return;
		}
		Node* tempHead = head;
		Node* deleter = head->next;
		for (unsigned int i = 1; i < m_size - 1; ++i)
		{
			if (i == position)
			{
				Node* next = deleter->next;
				delete deleter;
				tempHead->next = next;
				--m_size;
				return;
			}
			tempHead = tempHead->next;
			deleter = deleter->next;
		}
	}
	void set(unsigned int position, T value)
	{
		__exception_out_of_range(position);
		Node* curr = head;
		for (unsigned int i = 0; i < m_size; ++i, curr = curr->next)
		{
			if (i == position)
			{
				curr->m_value = value;
			}
		}
	}
	void push_back(T item)
	{
		if (m_size == 0)
		{
			head = new Node(item);
			++m_size;
			return;
		}
		for (Node* curr = head; curr != nullptr; curr = curr->next)
		{
			if (curr->next == nullptr)
			{
				curr->next = new Node(item);
				++m_size;
				return;
			}
		}
	}
	void push_front(T item)
	{
		Node* temp = new Node(item);
		temp->next = head;
		head = temp;
		++m_size;
	}
	void insert(unsigned int position, T item)
	{
		__exception_out_of_range(position);
		if (position == m_size - 1)
		{
			push_back(item);
			return;
		}
		else if (position == 0)
		{
			push_front(item);
			return;
		}
		Node* curr = head;
		for (unsigned int i = 1; i < m_size; ++i, curr = curr->next)
		{
			if (i == position)
			{
				Node* temp = curr->next;
				curr->next = new Node(item);
				curr->next->next = temp;
				++m_size;
				return;
			}
		}
	}
	void clear()
	{
		__clear(head);
	}
	void swap(unsigned int first, unsigned int second)
	{
		__exception_out_of_range(first);
		__exception_out_of_range(second);
		if (first == second)
		{
			return;
		}
		if (first > second)
		{
			std::swap(first, second);
		}
		Node* firstNodePtr = nullptr;
		Node* firstNodeNext = head;
		Node* secondNodePtr = nullptr;
		Node* secondNodeNext = head;
		for (unsigned int i = 0; i != first; ++i)
		{
			firstNodePtr = firstNodeNext;
			firstNodeNext = firstNodeNext->next;
		}
		for (unsigned int i = 0; i != second; ++i)
		{
			secondNodePtr = secondNodeNext;
			secondNodeNext = secondNodeNext->next;
		}
		Node* temp = secondNodeNext->next;
		secondNodeNext->next = firstNodeNext->next;
		firstNodeNext->next = temp;
		if (firstNodePtr == nullptr)
		{
			head = secondNodeNext;
			secondNodePtr->next = firstNodeNext;
			return;
		}
		firstNodePtr->next = secondNodeNext;
		secondNodePtr->next = firstNodeNext;
	}
	void reverse()
	{
		head = __reverse(head);
	}
	void unique()
	{
		if (head == nullptr || head->next == nullptr)
		{
			return;
		}
		Node* first = head;
		for (int i = 0; i < m_size - 1; ++i, first = first->next)
		{
			Node* second = first->next;
			for (int j = i + 1; j < m_size; ++j)
			{
				if (first->m_value == second->m_value)
				{
					erase(j);
					i = 0;
					first = head;
					break;
				}
				second = second->next;
			}
		}
	}
private:
	void __exception_out_of_range(unsigned int index) const
	{
		if (index < 0 || index >= m_size)
		{
			throw std::out_of_range("Out of range!");
		}
	}
	void __clear(Node*& head)
	{
		if (head == nullptr)
		{
			return;
		}
		__clear(head->next);
		delete head;
		head = nullptr;
		--m_size;
	}
	void __copy_ctor_push_front(Node*& head)
	{
		if (head == nullptr)
		{
			return;
		}
		__copy_ctor_push_front(head->next);
		push_front(head->m_value);
	}
	Node* __reverse(Node*& head)
	{
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		Node* prevPart = __reverse(head->next);
		head->next->next = head;
		head->next = nullptr;
		return prevPart;
	}
};