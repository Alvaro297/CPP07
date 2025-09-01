#include "Array.hpp"

template <typename T>
Array<T>::Array() : n(0)
{
	std::cout << "Array constructor created" << std::endl;
	if (n <= 0)
		this->_data = NULL;
	else
		this->_data = new T[this->n];
}

template <typename T>
Array<T>::Array(unsigned int newSize) : n(newSize)
{
	std::cout << "Array constructor created" << std::endl;
	if (n <= 0)
		this->_data = NULL;
	else
		this->_data = new T[this->n];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& arrayCopy)
{
	if (this != &arrayCopy)
	{
		this->n = arrayCopy.n;
		if(this->_data)
			delete [] this->_data;
		if (arrayCopy.n > 0)
		{
			this->_data = new T[this->n];
			for (size_t i = 0; i < n; i++)
				this->_data[i] = arrayCopy._data[i];
		}
		else
			this->_data = NULL;
	}
	return (*this);
}

template <typename T>
Array<T>::Array(const Array<T>& arrayCopy)
{
	if (this != &arrayCopy)
	{
		this->n = arrayCopy.n;
		if (arrayCopy.n > 0)
		{
			this->_data = new T[this->n];
			for (size_t i = 0; i < n; i++)
				this->_data[i] = arrayCopy._data[i];
		}
		else
		{
			this->_data = NULL;
		}
	}
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor of Array" << std::endl;
	delete[] this->_data;
}

template <typename T>
unsigned int Array<T>::size() const{ return (this->n); }

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->n)
		throw IndexOutClass();
	return (this->_data[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= this->n)
		throw IndexOutClass();
	return (this->_data[index]);
}