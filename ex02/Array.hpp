#pragma once 
#include <iostream>
#include <cstdlib>

template <typename T>
class   Array
{

public:

    Array(); // Constructeur par défaut
    Array(unsigned int n);
    Array(const Array<T>& Array); // Constructeur de recopie
    ~Array (); // Destructeur éventuellement virtuel
    Array<T> &operator=(const Array<T>&); // O
    int &operator[](unsigned int indice); // O

    unsigned int size() const;

private:

    unsigned int len;
    T * array;
};

template <typename T>
Array<T>::Array() : len(0)
{
    array = new T[len];
    return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
    array = new T[len];
    return ;
}

template <typename T>
Array<T>::Array(const Array<T>& take)
{
    unsigned int i = -1;
    len = take.len;
    array = new T[len];
    while (++i < len)
        array[i] = take.array[i]; 
    return ;
}
template <typename T>
Array<T>::~Array()
{
    delete [] array;
    return ;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& take)
{
    int i = -1;
    len = take.len;
    delete [] array;
    array = new T[len];
    while (++i < len)
        array[i] = take.array[i];
    return (*this);
}

template <typename T>
int &Array<T>::operator[](unsigned int indice)
{
    if (indice < 0 || indice >= len)
        throw std::exception();
    return (this->array[indice]);
}