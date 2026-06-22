#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

class Phonebook
{
	private:
		void	_showHeader();
		int		_max_length;
		int		_actual_new_index;
		void	_search();
		void	_add();
	public:
		Contact	contacts[8];
		Phonebook(int max_length);
		void	prompt();
};

#endif
