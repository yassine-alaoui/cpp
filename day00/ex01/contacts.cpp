#include "lib.hpp"

# define cin std::cin
# define cout std::cout
# define cerr std::cerr
# define endl std::endl
# define string std::string

void	creat_contact(Contact *NewContact)
{
	string	tempo;

	cout << "Creating new contact please write the \033[4;3;102;30mfirst name\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_FirstName(tempo);
	cout << "Please write the \033[4;3;102;30mlast name\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_LastName(tempo);
	cout << "Please write the \033[4;3;102;30mnick name\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_NickName(tempo);
	cout << "Please write the \033[4;3;102;30mlogin\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Login(tempo);
	cout << "Please write the \033[4;3;102;30mpostal address\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Postal_Address(tempo);
	cout << "Please write the \033[4;3;102;30memail address\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Email_Address(tempo);
	cout << "Please write the \033[4;3;102;30mphone number\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_PhoneNum(tempo);
	cout << "Please write the \033[4;3;102;30mBirthDate\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_BirthDate(tempo);
	cout << "Please write the \033[4;3;102;30mFavorite meal\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Favorite_Meal(tempo);
	cout << "Please write the \033[4;3;102;30mUnderear color\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Underwear_Color(tempo);
	cout << "Please write the \033[4;3;102;30mDarkest Secret\033[0m of the new contact :" << endl << "=>>";
	std::getline(cin, tempo);
	(*NewContact).set_Darkest_Secret(tempo);
}

void	print_contact(Contact NewContact)
{
	cout << "FirstName: -->>";
	cout << NewContact.get_FirstName() << endl;
	cout << "LastName: -->>";
	cout << NewContact.get_LastName() << endl;
	cout << "NickName: -->>";
	cout << NewContact.get_NickName() << endl;
	cout << "PhoneNumber: -->>";
	cout << NewContact.get_PhoneNum() << endl;
	cout << "Login: -->>";
	cout << NewContact.get_Login() << endl;
	cout << "PostalAddress: -->>";
	cout << NewContact.get_Postal_Address() << endl;
	cout << "EmailAddress: -->>";
	cout << NewContact.get_Email_Address() << endl;
	cout << "Birthday: -->>";
	cout << NewContact.get_BirthDate() << endl;
	cout << "FavoriteMeal: -->>";
	cout << NewContact.get_Favorite_Meal() << endl;
	cout << "UnderwearColor: -->>";
	cout << NewContact.get_Underwear_Color() << endl;
	cout << "DarkestSecret: -->>";
	cout << NewContact.get_Darkest_Secret() << endl;
}

void	search_contact(Contact *NewContact, int N)
{
	int 	i;
	string	tmp;

	i = 0;
	while (i < N)
	{
		cout << std::setw(11);
		cout << i << "|";
		tmp = NewContact[i].get_FirstName();
		tmp = tmp.substr(0,10);
		if (tmp.length() > 9)
			tmp = tmp.insert(10, ".");
		else
			cout << std::setw(11);
		cout << tmp << "|";
		tmp = NewContact[i].get_LastName();
		tmp = tmp.substr(0,10);
		if (tmp.length() > 9)
			tmp = tmp.insert(10, ".");
		else
			cout << std::setw(11);
		cout << tmp << "|";
		tmp = NewContact[i].get_NickName();
		tmp = tmp.substr(0,10);
		if (tmp.length() > 9)
			tmp = tmp.insert(10, ".");
		else
			cout << std::setw(11);
		cout << tmp << "|" << endl;
		i++;
	}
	cout << "\033[34;4mWhich index do you desire:\033[0m" << endl;
	std::getline(cin, tmp);
	if (tmp.length() == 1 && (tmp[0]) && std::stoi(tmp) < N)
		print_contact(NewContact[std::stoi(tmp)]);
	else
		cerr << "\033[31mBad request\033[0m" << endl;
}

int	main()
{
	Contact	contact[8];
	string	command;
	int		num_cont;

	num_cont = 0;
	cout << "\033[33;21mUse ADD to add new contact, SEARCH to look for a contact and EXIT to quit.\033[0m" << endl;
	while (1)
	{
		cout << "\033[33mWaiting for command :\033[0m" << endl;
		std::getline(cin, command);
		if (command == "EXIT")
			return (0);
		else if (command == "SEARCH")
		{
			if (num_cont == 0)
			{
				cerr << "No contacts found" << endl;
				continue ;
			}
			search_contact(contact, num_cont);
		}
		else if (command == "ADD")
		{
			if (num_cont >= 8)
			{
				cerr << "Enough for today!!" << endl;
				continue ;
			}
			creat_contact(&contact[num_cont]);
			num_cont++;
		}
		else
			cerr << "\033[31mBad request\033[0m" << endl;
	}
	return (0);
}



