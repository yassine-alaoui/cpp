# include "Human.hpp"

int main()
{
	Human bob;

	cout << bob.identify() << endl;
	cout << bob.getBrain().identify() << endl;
}