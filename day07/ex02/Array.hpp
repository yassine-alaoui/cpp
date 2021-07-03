#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		unsigned int	n;
		T				*ptr;
	public:
		Array();
		Array(unsigned int p);
		Array(Array const& val);
		Array & operator=(Array const& val);
		T & operator[](size_t index);
		~Array();
};

template <typename T>
Array<T>::Array()
{
	n = 0;
	ptr = new T;
}

template <typename T>
Array<T>::Array(unsigned int p)
{
	n = p;
	ptr = new T[p];
}

template <typename T>
Array<T>::Array(Array const& val)
{
	*this = val;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const& val)
{
	this->ptr = val.ptr;
	this->n = val.n;
	return *this;
}

template <typename T>
T & Array<T>::operator[](size_t index)
{
	if (index >= n)
		throw std::exception();
	return ptr[index];
}

template <typename T>
Array<T>::~Array()
{
}


#endif