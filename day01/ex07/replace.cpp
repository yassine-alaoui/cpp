# include <iostream>
# include <fstream>

# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

void	startReplacing(char **arv, std::ifstream &file)
{
	int		pos;
	string	outName;
	string	line;
	string	s1;
	string	s2;

	pos = 0;
	outName = arv[1];
	outName += ".replace";
	s1 = arv[2];
	s2 = arv[3];
	std::ofstream	outfile;
	outfile.open(outName);
	while (getline(file, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) >= 0)
		{
			line.replace(pos, s1.length(), s2);
			pos += 1;
		}
		outfile << line << endl;
	}
	outfile.close();
	file.close();
}

int	main(int arc, char **arv)
{
	if (arc == 4)
	{
		string	name;
		name = arv[1];
		std::ifstream test(name.c_str());
		if (!test.good())
		{
			cout << "Can't read from file" << endl;
			test.close();
			return (1);
		}
		else
		{
			startReplacing(arv, test);
			return (0);
		}
	}
	else
	{
		cout << "Wrong number of arguments" << endl;
		return (1);
	}
}