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
	if(arrayCopy != this)
	{
		
	}
}

template <typename T>
unsigned int Array<T>::size() const{ return (this->n) }