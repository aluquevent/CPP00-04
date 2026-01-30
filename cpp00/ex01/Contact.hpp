#ifndef CONTACT_H
 #define CONTACT_H

#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;

	void	set_contact();
};
#endif // !CONTACT_H
