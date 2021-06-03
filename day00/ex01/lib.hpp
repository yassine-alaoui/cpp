#ifndef LIB_HPP
# define LIB_HPP
#include <string>
#include <iostream>
#include <iomanip>

# define string std::string
class Contact {
	private:
		string	PhoneNum;
		string	FirstName;
		string	LastName;
		string	NickName;
		string	Login;
		string	Postal_Address;
		string	Email_Address;
		string	BirthDate;
		string	Favorite_Meal;
		string	Underwear_Color;
		string	Darkest_Secret;
	public:
		// Setters
		void set_PhoneNum(string value) { PhoneNum = value; };
		void set_FirstName(string value) { FirstName = value; };
		void set_LastName(string value) { LastName = value; };
		void set_NickName(string value) { NickName = value; };
		void set_Login(string value) { Login = value; };
		void set_Postal_Address(string value) { Postal_Address = value; };
		void set_Email_Address(string value) { Email_Address = value; };
		void set_BirthDate(string value) { BirthDate = value; };
		void set_Favorite_Meal(string value) { Favorite_Meal = value; };
		void set_Underwear_Color(string value) { Underwear_Color = value; };
		void set_Darkest_Secret(string value) { Darkest_Secret = value; };

		// Getters
		string	get_PhoneNum() { return (PhoneNum); };
		string	get_FirstName() { return (FirstName); };
		string	get_LastName() { return (LastName); };
		string	get_NickName() { return (NickName); };
		string	get_Login() { return (Login); };
		string	get_Postal_Address() { return (Postal_Address); };
		string	get_Email_Address() { return (Email_Address); };
		string	get_BirthDate() { return (BirthDate); };
		string	get_Favorite_Meal() { return (Favorite_Meal); };
		string	get_Underwear_Color() { return (Underwear_Color); };
		string	get_Darkest_Secret() { return (Darkest_Secret); };
};

#endif