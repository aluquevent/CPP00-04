#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->contact_count = 0;
	this->last_index = -1;
}

PhoneBook::~PhoneBook(){
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
void	PhoneBook::add_contact()
{
	last_index++;
	if (last_index == 8)
		last_index = 0;
	contacts[last_index].set_contact();
	if (contact_count != 8)
		contact_count++;
}
void	PhoneBook::display_contact(int idx)
{
	Contact c;

	c = contacts[idx];
	std::cout << std::endl << "Contact [" << idx << "] data: "<< std::endl;
	std::cout << "	First name: " << c.first_name << std::endl;
	std::cout << "	Last name: " << c.last_name << std::endl;
	std::cout << "	Nickname: " << c.nickname << std::endl;
	std::cout << "	Phone number: " << c.phonenumber<< std::endl;
	std::cout << "	Darkest secret: " << c.darkest_secret << std::endl << std::endl;
}

void	PhoneBook::search_contacts()
{
	int	i;
	int	choosen_idx;
	std::cout	<< std::right
				<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First" << "|"
				<< std::setw(10) << "Last" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	i = 0;

	while (i <= contact_count - 1)
	{	
		std::cout	<< std::right
				<< std::setw(10) << i << "|"
				<< std::setw(10) << truncate(contacts[i].first_name) << "|"
				<< std::setw(10) << truncate(contacts[i].last_name) << "|"
				<< std::setw(10) << truncate(contacts[i].nickname) << std::endl;
		i++;
	}
	std::cout << "Choose a contact index to display [0-7]: ";
	std::cin >> choosen_idx;
	if (choosen_idx >= 0 && choosen_idx <= contact_count - 1)
		display_contact(choosen_idx);
	else
		std::cout << "Not a valid index. " << std::endl;
}


