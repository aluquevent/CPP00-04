#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phonenumber = "";
	darkest_secret = "";
}

Contact::~Contact()
{
}

void	Contact::set_contact()
{
	std::cin.ignore();
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phonenumber: ";
	std::getline(std::cin, phonenumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);

	std::cout << std::endl << "📱 New contact added!" << std::endl << std::endl;
}
