# include "iter.hpp"

int main()
{
	std::string var[3];
	int			ptr[3] = {1, 3, 4};
	var[0] = "hey hello hey hey hallo!";
	var[1] = "wasssaaa eyyyyy yooo wtup";
	var[2] = "so I meaaaaan okay then";
	iter(var, 3, puts);
	iter(ptr, 3, puts);
}