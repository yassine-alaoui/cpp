#include "Data.hpp"

Data::Data(/* args */)
{
}

Data::Data(Data const& val)
{
	*this = val;
}

Data & Data::operator = (Data const& val)
{
	return *this;
}

Data::~Data()
{
}
