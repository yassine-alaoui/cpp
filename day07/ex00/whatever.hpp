#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP

# include <iostream>

template <typename T>
T max(T const & x, T const & y)
{
   return (x > y)? x: y;
}

template <typename T>
T min(T const & x, T const & y)
{
   return (x < y)? x: y;
}

template <typename T>
void swap(T & x, T & y)
{
   T tmp;

   tmp = x;
   x = y;
   y = tmp;
}

#endif