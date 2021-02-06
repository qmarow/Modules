#include "Array.hpp"
#include <cctype>

template <typename T>
Array<T>::Array()
{
    this->array = NULL;
    this->len = 0;
}

template <typename T>
Array<T>::Array(size_t n)
{
    this->array = new T[n];
    this->len = n;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &array)
{
    if (array.len)
    {
        delete (this->array);
        this->len = array.len;
        this->array = new T[this->len];
        for (int i = 0; i < array.len; i++)
            this->array[i] = array.array[i];
    }
    else
    {
        this->len = 0;
        this->array = NULL;
    }
    return (*this);
}

template <typename T>
const char *Array<T>::GoingBeyondException::what() const throw()
{
    return ("Exception: you are out of the array");
}

template <typename T>
size_t  Array<T>::size(void) const
{
    return (this->len);
}

template <typename T>
T       &Array<T>::operator[](int i)
{
    if (i < 0 || i >= this->len)
        throw GoingBeyondException();
    return (this->array[i]);
}

template <typename T>
Array<T>::~Array()
{
	if (this->len)
		delete (this->array);
}
