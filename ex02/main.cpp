#include <iostream>
#include "Array.hpp"

int main()
{
	try {
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;

		Array<int> numbers(5);
		for (unsigned int i = 0; i < numbers.size(); i++)
			numbers[i] = i * 10;

		std::cout << "Numbers: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << " ";
		std::cout << std::endl;

		Array<std::string> words(3);
		words[0] = "Hola";
		words[1] = "CPP07";
		words[2] = "Array";

		std::cout << "Words: ";
		for (unsigned int i = 0; i < words.size(); i++)
			std::cout << words[i] << " ";
		std::cout << std::endl;

		Array<std::string> wordsCopy(words);
		wordsCopy[1] = "Mundo";
		std::cout << "Original words[1]: " << words[1] << std::endl;
		std::cout << "Copied words[1]:   " << wordsCopy[1] << std::endl;

		Array<int> numbersCopy;
		numbersCopy = numbers;
		numbersCopy[0] = 999;
		std::cout << "Original numbers[0]: " << numbers[0] << std::endl;
		std::cout << "Copied numbers[0]:   " << numbersCopy[0] << std::endl;

		std::cout << "Trying to access index 10 of numbers..." << std::endl;
		std::cout << numbers[10] << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
