#include <iostream>
#include <string>

template <class T>
void swap(T &data1, T &data2)
{
	T swapHelp;

	swapHelp = data1;
	data1 = data2;
	data2 = swapHelp;
}

template <class T>
const T min(const T data1, const T data2)
{
	return data1 < data2 ? data1 : data2;
}

template <class T>
const T max(const T data1, const T data2)
{
	return data1 > data2 ? data1 : data2;
}

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}
