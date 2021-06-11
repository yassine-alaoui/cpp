#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	private:
		int			hp;
		int			mhp;
		int			mp;
		int			mmp;
		int			lvl;
		std::string	name;
		int			mad;
		int			rad;
		int			adr;
	public:
		FragTrap(/* args */);
		~FragTrap();
};

FragTrap::FragTrap(/* args */)
{
}

FragTrap::~FragTrap()
{
}


#endif