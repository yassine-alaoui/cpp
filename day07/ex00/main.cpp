# include "whatever.hpp"

int main()
{
	float num0;
	float num1;

	num0 = 14.2;
	num1 = 21.5;
	std::cout << max(1337, 42) << '\n';
	std::cout << min(1337, 42) << '\n';
	swap(num0, num1);
	std::cout << num0 << " " << num1 << '\n-----------------\n';
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}