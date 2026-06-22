#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		unsigned int	contact_id;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
	private:
		std::string		darkest_secret;
	Contact();	
}

#endif
