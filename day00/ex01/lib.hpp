#ifndef LIB_HPP
# define LIB_HPP
#include <string>
#include <iostream>

class Contact {
  public:
	bool iscreated;
    int PhoneNum;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string Login;
    std::string Postal_Address;
    std::string Email_Address;
    std::string BirthDate;
    std::string Favorite_Meal;
    std::string Underwear_Color;
    std::string Darkest_Secret;
	void trunc()
	{
		int spaces;
		char space;
	
		space = ' ';
		if (this->FirstName.length() > 10)
		{
			this->FirstName.substr(0,10);
			this->FirstName.back() = '.'; 
		}
		else if (this->FirstName.length() < 10)
		{
			spaces = 10 - this->FirstName.length();
			for (int i = 0; i < spaces; i++)
				this->FirstName.front();
		}
		if (this->LastName.length() > 10)
		{
			this->LastName.substr(0,10);
			this->LastName.back() = '.'; 
		}
		if (this->NickName.length() > 10)
		{
			this->NickName.substr(0,10);
			this->NickName.back() = '.'; 
		}
	}
};

#endif