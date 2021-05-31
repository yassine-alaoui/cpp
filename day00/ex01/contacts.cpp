#include "lib.hpp"

int main()
{
	std::string command;
	int			i;
	int			j;
	int			thewho;
	bool		done;
	Contact contact[8];

	i = 0;
	std::cout << "\033[33;21mUse ADD to add new contact, SEARCH to look for a contact and EXIT to quit.\033[0m" << std::endl;
	while (i < 8)
	{
		command = "";
		std::cout << "\033[33mWaiting for command :\033[0m" << std::endl;
		std::cin >> command;
		contact[i].iscreated = 0;
		if (command == "EXIT")
			return (0);
		if (command == "SEARCH")
		{
			j = 0;
			done = 0;
			if (i == 0)
				std::cout << "Nothing found" << std::endl;
			while (j < i)
			{
				if (contact[j].iscreated == 1)
				{
					std::string firstname;
					std::string lastname;
					std::string nickname;

					firstname = contact[j].FirstName.substr(0,10);
					lastname = contact[j].LastName.substr(0,10);
					nickname = contact[j].NickName.substr(0,10);
					if (firstname.length() > 9)
						firstname = firstname.insert(10, ".");
					if (lastname.length() > 9)
						lastname = lastname.insert(10, ".");
					if (nickname.length() > 9)
						nickname = nickname.insert(10, ".");
					done = 1;
					std::cout << j << "|" << firstname << "|" << lastname << "|" << nickname << std::endl;
				}
				if (done == 0)
				{
					std::cout << "Nothing found" << std::endl;
					break ;
				}
				j++;
			}
			if (done == 1)
			{
				std::cout << "\033[34;4mWhich index do you desire:\033[0m" << std::endl;
				std::cin >> thewho;
				std::cout << "\n" << contact[thewho].FirstName << "\n" << contact[thewho].LastName << "\n" << contact[thewho].NickName << "\n" << contact[thewho].Login << "\n"
					<< contact[thewho].Postal_Address << "\n" << contact[thewho].Email_Address << "\n" << contact[thewho].BirthDate << "\n" << contact[thewho].Favorite_Meal << "\n"
						<< contact[thewho].Underwear_Color << "\n" << contact[thewho].Darkest_Secret << std::endl;
			}
		}
		if (command == "ADD")
		{
			contact[i].iscreated = 1;
			std::cout << "Creating new contact please write the \033[4;3;102;30mfirst name\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].FirstName;
			std::cout << "Please write the \033[4;3;102;30mlast name\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].LastName;
			std::cout << "Please write the \033[4;3;102;30mnick name\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].NickName;
			std::cout << "Please write the \033[4;3;102;30mlogin\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Login;
			std::cout << "Please write the \033[4;3;102;30mpostal address\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Postal_Address;
			std::cout << "Please write the \033[4;3;102;30memail address\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Email_Address;
			std::cout << "Please write the \033[4;3;102;30mphone number\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].PhoneNum;
			std::cout << "Please write the \033[4;3;102;30mBirthDate\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].BirthDate;
			std::cout << "Please write the \033[4;3;102;30mFavorite meal\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Favorite_Meal;
			std::cout << "Please write the \033[4;3;102;30mUnderear color\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Underwear_Color;
			std::cout << "Please write the \033[4;3;102;30mDarkest Secret\033[0m of the new contact :" << std::endl << "=>>";
			std::cin >> contact[i].Darkest_Secret;
			i++;
		}
	}
}
