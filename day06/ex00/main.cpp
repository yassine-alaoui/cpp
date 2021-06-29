# include <iostream>
# include <string>
# include <math.h>

int isallnum(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (0);
	return (1);
}

int main(int argc, char **argv)
{
	std::string	tmp;
	std::string	chartest;
	int			ascii;
	int			intest;
	float		floatest;
	double		doubletest;

	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments!\n";
		return 1;
	}
	tmp = argv[1];
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(1);
	if (tmp == "0")
		std::cout << "Non displayable" << "\n";
	else if (!isallnum(tmp))
		std::cout << "'" << tmp << "'" << "\n";
	else if (tmp == "nan")
		std::cout << "impossible" << "\n";
	else
	{
		try
		{
			ascii = std::stoi(tmp);
			if (ascii > 0 && ascii <= 127)
				std::cout << "'" << static_cast<char>(ascii) << "'" << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	try
	{
		intest = std::stoi(tmp);
		std::cout << intest << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible\n";
	}
	try
	{
		floatest = std::stof(tmp);
		std::cout << floatest << "f" << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible\n";
	}
	try
	{
		doubletest = std::stod(tmp);
		std::cout << doubletest << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible\n";
	}
}