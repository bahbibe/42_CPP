#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;

public:
    Array<T>() : _array(new T[0]()), _size(0) {}
    Array<T>(unsigned int n) : _array(new T[n]()), _size(n) {}
    Array<T>(const Array &copy) : _array(new T[copy._size]()), _size(copy._size)
    {
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = copy._array[i];
    }
    ~Array() { delete[] _array; }
    Array &operator=(const Array &copy)
    {
        if (this != &copy)
        {
            delete[] _array;
            _array = new T[copy._size]();
            _size = copy._size;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = copy._array[i];
        }
        return (*this);
    }
    T const &operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return (_array[index]);
    }
    T &operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return (_array[index]);
    } 
    unsigned int size() const { return (_size); } 

};
