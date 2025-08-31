#include <iostream>
#include "iter.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4};
	std::cout << "Before increment:" << std::endl;
	iter(arr, 4, printElement);

	iter(arr, 4, printElement);

	std::cout << "After increment:" << std::endl;
	iter(arr, 4, printElement);

	std::string sarr[] = {"one", "two", "three"};
	std::cout << "Strings:" << std::endl;
	iter(sarr, 3, printElement);

	return 0;
}