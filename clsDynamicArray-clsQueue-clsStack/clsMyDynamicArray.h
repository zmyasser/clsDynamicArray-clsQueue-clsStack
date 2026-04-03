#pragma once
#include <iostream>

template <class T>
class clsDynamicArray
{
protected:

    size_t _Size = 0;
  
public:

    T* OriginalArray = nullptr;

    // Constructor
    clsDynamicArray(size_t Size = 0): _Size(Size)
    {
        OriginalArray = (_Size > 0) ? new T[_Size] : nullptr;
    }

    // Destructor
    ~clsDynamicArray()
    {
        delete[] OriginalArray;
    }

    // Set item at index
    bool SetItem(size_t index, const T& Value)
    {
        if (index >= _Size) return false;
        OriginalArray[index] = Value;
        return true;
    }

    // Get item at index
    const T& GetItem(size_t index) const
    {
        if (index >= _Size) throw std::out_of_range("Index out of range");
        return OriginalArray[index];
    }

    // Return current size
    size_t Size() const
    {
        return _Size;
    }

    // Check if empty
    bool IsEmpty() const
    {
        return (_Size == 0);
    }

    // Print all items
    void PrintList() const
    {
        for (size_t i = 0; i < _Size; i++)
        {
            std::cout << OriginalArray[i] << " ";
        }
        std::cout << "\n";
    }

    // Resize array
    void Resize(size_t NewSize)
    {
        T* NewArray = (NewSize > 0) ? new T[NewSize] : nullptr;
        size_t CopySize = (NewSize < _Size) ? NewSize : _Size;

        for (size_t i = 0; i < CopySize; i++)
        {
            NewArray[i] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = NewArray;
        _Size = NewSize;
    }

    // Reverse array
    void Reverse()
    {
        if (_Size <= 1) return;

        for (size_t i = 0; i < _Size / 2; i++)
        {
            std::swap(OriginalArray[i], OriginalArray[_Size - 1 - i]);
        }
    }

    // Clear array
    void Clear()
    {
        delete[] OriginalArray;
        OriginalArray = nullptr;
        _Size = 0;
    }

    // Find index of a value
    int Find(const T& Value) const
    {
        for (size_t i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == Value)
            {
                return static_cast<int>(i);
            }
        }

        return -1;
    }

    // Delete item at a specific index
    bool DeleteItemAt(size_t index)
    {
        if (index >= _Size) return false;

        if (_Size == 1)
        { 
            Clear();
            return true;
        }

        T* NewArray = new T[_Size - 1];
        for (size_t i = 0, j = 0; i < _Size; i++)
        {
            if (i != index) NewArray[j++] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = NewArray;
        _Size--;
        return true;
    }

    void DeleteFirstItem()
    { 
        DeleteItemAt(0);
    }

    void DeleteLastItem()
    { 
        DeleteItemAt(_Size - 1);
    }

    // Delete item by value
    bool DeleteItem(const T& Value)
    {
        int index = Find(Value);
        if (index == -1) return false;
        return DeleteItemAt(static_cast<size_t>(index));
    }

    // Insert value at specific index
    bool InsertAt(size_t index, const T& value)
    {
        if (index > _Size) return false;


        T* NewArray = new T[_Size + 1];
        for (size_t i = 0; i < index; i++)
        {
            NewArray[i] = OriginalArray[i];
        }

        NewArray[index] = value;

        for (size_t i = index; i < _Size; i++)
        {
            NewArray[i + 1] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = NewArray;
        _Size++;
        return true;
    }

    void InsertAtBeginning(const T& value)
    { 
        InsertAt(0, value);
    }

    bool InsertAtEnd(const T& value) 
    { 
        return InsertAt(_Size, value); 
    }

    bool InsertBefore(size_t index, const T& value)
    {
        return (index < 1) ? InsertAt(0, value) : InsertAt(index, value);
    }

    bool InsertAfter(size_t index, const T& value)
    {
        return (index >= _Size - 1) ? InsertAtEnd(value) : InsertAt(index + 1, value);
    }
};