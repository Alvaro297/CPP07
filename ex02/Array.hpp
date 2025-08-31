#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T> 
class Array
{
private:
	T* _data;
	unsigned int n;
public:
	Array();
	Array(unsigned int newSize);
	Array& operator=(const Array& arrayCopy);
	unsigned int size() const;
	~Array();
};


#include "Array.tpp"
#endif