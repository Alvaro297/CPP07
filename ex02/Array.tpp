#include "Array.hpp"

template <typename T>
Array<T>::Array() : n(0)
{
	std::cout << "Array constructor created" << std::endl;
	if (n <= 0)
		this->_data = NULL;
	else
		this->_data = new T[this.n];
	return NULL;
}

template <typename T>
Array<T>::Array(unsigned int newSize) : n(newSize)
{
	std::cout << "Array constructor created" << std::endl;
	if (n <= 0)
		this->_data = NULL;
	else
		this->_data = new T[this.n];
	return NULL;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& arrayCopy)
{
	if (this != &arrayCopy)
	{
		this->n = arrayCopy.n
		delete [] this->_data;
		if (arrayCopy.n > 0)
		{
			new this->_data = new T[this->n];
			for (size_t i = 0; i < n; i++)
				this->_data[i] = arrayCopy->_data[i]
		}
		else
			this->_data = NULL;
	}
	return *this;
}

template <typename T>
unsigned int Array<T>::size() const{ return (this->n) }