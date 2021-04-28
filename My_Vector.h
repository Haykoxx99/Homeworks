#pragma once
template <typename T>
class Vector
{
private:
	int m_capacity;
	int m_size;
	T* m_array;
public:
	Vector()
		:m_capacity{ 4 }, m_size{ 0 }
	{
		m_array = new T[m_capacity];
	}
	Vector(const Vector& other)
	{
		this->m_capacity = other.m_capacity;
		this->m_size = other.m_size;
		T* temp = new T[other.m_capacity];
		for (int i = 0; i < other.m_size; i++)
		{
			temp[i] = other.m_array[i];
		}
		m_array = temp;
	}
	Vector& operator=(const Vector& other)
	{
		this->m_capacity = other.m_capacity;
		this->m_size = other.m_size;
		T* temp = new T[other.m_capacity];
		for (int i = 0; i < other.m_size; i++)
		{
			temp[i] = other.m_array[i];
		}
		delete[] this->m_array;
		m_array = temp;
		return *this;
	}
	T operator[](int index)
	{
		if (index >= m_size)
		{
			throw "Error";
		}
		return m_array[index];
	}
	~Vector()
	{
		delete[] m_array;
	}
public:
	void push_back(const T& item)
	{
		if (m_capacity == m_size)
		{
			resize(0);
		}
		m_array[m_size] = item;
		++m_size;
	}
	void push_front(const T& item)
	{
		if (m_capacity == m_size)
		{
			resize(1);
			m_array[0] = item;
			++m_size;
		}
		else
		{
			for (int i = m_size; i > 0; i--)
			{
				m_array[i] = m_array[i - 1];
			}
			m_array[0] = item;
			++m_size;
		}
	}
	int size() const
	{
		return m_size;
	}
	int capacity() const
	{
		return m_capacity;
	}
private:
	void resize(int index)
	{
		this->m_capacity = m_capacity + (m_capacity / 2);
		T* temp = new T[m_capacity];
		for (int i = index; i <= m_size; i++)
		{
			temp[i] = m_array[i - index];
		}
		delete[] this->m_array;
		m_array = temp;
	}
};