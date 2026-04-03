#pragma once
#include <iostream>
#include "clsMyDynamicArray.h"


template <class T>
class clsMyQueue
{

protected:

	clsDynamicArray <T> _MyArrayList;

public:

	void push(const T& Item)
	{
		_MyArrayList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyArrayList.DeleteFirstItem();
	}

	void Print() const
	{
		_MyArrayList.PrintList();
	}

	size_t Size() const 
	{
		return _MyArrayList.Size();
	}

	bool IsEmpty() const
	{
		return _MyArrayList.IsEmpty();
	}

	const T& front() const
	{
		if (_MyArrayList.IsEmpty())
		{
			throw std::out_of_range("Index out of range");
		}

		return _MyArrayList.GetItem(0);
	}

	const T& back() const
	{
		if (_MyArrayList.IsEmpty())
		{
			throw std::out_of_range("Index out of range");
		}

		return _MyArrayList.GetItem(Size() - 1);
	}

	const T& GetItem(size_t Index) const
	{
		return _MyArrayList.GetItem(Index);
	}

	void Reverse()
	{
		_MyArrayList.Reverse();
	}

	void UpdateItem(size_t Index, const T& NewValue)
	{
		_MyArrayList.SetItem(Index, NewValue);
	}

	bool InsertAfter(size_t Index, const T &NewValue)
	{
		return _MyArrayList.InsertAfter(Index, NewValue);
	}

	void push_Front(const T &Value)
	{
		_MyArrayList.InsertAtBeginning(Value);
	}

	bool push_Back(const T &Value)
	{
		return _MyArrayList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyArrayList.Clear();
	}

};



