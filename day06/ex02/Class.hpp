#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <exception>

class Base
{
	private:
	public:
		virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif