#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
	public:
		Data(/* args */);
		Data(Data const& val);
		Data & operator = (Data const& val);
		~Data();
};

#endif