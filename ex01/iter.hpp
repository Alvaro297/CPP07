#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&));

template <typename T>
void iter(T const *array, size_t length, void (*func)(T const&));

template <typename T>
void printElement(T &elem);

template <typename T>
void printElement(T const &elem);

#include "iter.tpp"
#endif