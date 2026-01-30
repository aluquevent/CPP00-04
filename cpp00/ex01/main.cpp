#include "PhoneBook.hpp"

#include <iostream>
#include <string>

void	manage_options(PhoneBook& phone, std::string opt)
{
	if (opt == "ADD")
		phone.add_contact();
	else if (opt == "SEARCH")
		phone.search_contacts();
	else if (opt != "EXIT" )
		std::cout << "Use a valid option... " << std::endl;
}

int main()

{
	PhoneBook phone;
	
	std::string opt;

	std::cout << "Choose an option (ADD/SEARCH/EXIT): " << std::endl;
	std::cin >> opt;
	while(opt != "EXIT")
	{
		manage_options(phone, opt);
		std::cout << "Choose an option (ADD/SEARCH/EXIT): "<< std::endl;
		std::cin >> opt;
	}
	std::cout << "Bye!" << std::endl;
	return (0);
}
