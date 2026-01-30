#ifndef PHONEBOOK_H
 #define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		contact_count;
	int		last_index;
public:
	PhoneBook();
	~PhoneBook();

	void	add_contact();
	void	search_contacts();
	void	display_contact(int idx);
};

#endif // !PHONEBOOK_H
