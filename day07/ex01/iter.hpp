#if !defined(ITER_HPP)
# define ITER_HPP

# include <iostream>

template <typename T>
void	puts(T c)
{
	std::cout << c << "\n";
}

template <typename T>
void	iter(T * ptr, size_t size, void(*funcptr)(T))
{
	for (int i = 0; i < size; i++)
		funcptr(ptr[i]);
}

#endif // ITER_HPP
