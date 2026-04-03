#pragma once
#include <iostream>
#include "clsMyQueue.h"


template <class T>
class  clsMyStack :public clsMyQueue <T>
{

public:

	void push(const T &Item)
	{
		clsMyQueue <T>::_MyArrayList.InsertAtBeginning(Item);
	}

	void pop()
	{
		if (this->IsEmpty())
		{
			throw std::out_of_range("Stack is empty");
		}

		clsMyQueue <T>::clsMyQueue::pop();
	}

	const T& Top() const
	{
		if (this->IsEmpty())
		{
			throw std::out_of_range("Stack is empty");
		}

		return clsMyQueue <T>::front();
	}

	const T& Bottom() const
	{
		if (this->IsEmpty())
		{
			throw std::out_of_range("Stack is empty");
		}

		return clsMyQueue <T>::back();
	}

};



