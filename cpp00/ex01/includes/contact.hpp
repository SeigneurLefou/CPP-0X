#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		bool			is_empty;
		Contact();
		void			showContact(int index, int max_length);	
		void			setContact(int id,
				std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string darkest_secret);
	private:
		unsigned int	_contact_id;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		std::string 	_cropString(std::string old_str,
							size_t max_length);
};

#endif
