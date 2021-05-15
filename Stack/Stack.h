#pragma once
#include "Vector.h"
template <typename U>
class Stack : private Vector<U>
{
private:
	unsigned int pointer;
public:
	Stack() : pointer(0) {}
	void push_back(const U& item) override
	{
		Vector<U>::push_back(item);
		++pointer;
	}
	virtual void pop_back() override
	{
		Vector<U>::pop_back();
		--pointer;
	}
	void show_stack() const
	{
		if (pointer == 0)
		{
			std::cout << "Nothing to show" << std::endl;
			return;
		}
		for (int i = pointer - 1; i >= 0; --i)
		{
			std::cout << Vector<U>::operator[](i) << ' ';
		}
		std::cout << std::endl;
		return;
	}
};