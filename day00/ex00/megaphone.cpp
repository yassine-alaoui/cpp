#include <iostream>

int main(int arc, char **arv)
{
	if (arc > 1)
	{
		for (int i = 1; i < arc; i++)
			for (int j = 0; arv[i][j] ; j++)
			{
				if (arv[i][j] >= 'a' && arv[i][j] <= 'z')
				{
					arv[i][j] = arv[i][j] - 32;
					std::cout << arv[i][j];
				}
				else
					std::cout << arv[i][j];
			}
			std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}