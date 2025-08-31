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
	Array(const Array& arrayCopy);
	Array(unsigned int newSize);
	Array& operator=(const Array& arrayCopy);
	T& operator[](unsigned int index);
	const T& Array<T>::operator[](unsigned int index) const;
	unsigned int size() const;
	~Array();

	class IndexOutClass : public std::exception
	{
		public:
			const char* what() const throw() { return "You're out of array"; };
	}
};


#include "Array.tpp"
#endif