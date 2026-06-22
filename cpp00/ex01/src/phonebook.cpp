#include "phonebook.hpp"

Phonebook::Phonebook(int max_length) {
	_max_length = max_length;
	_actual_new_index = 0;
}

void	Phonebook::_showHeader() {
	std::cout.fill(' ');
	std::cout.width(_max_length);
	std::cout << "Index" << "|";
	std::cout.width(_max_length);
	std::cout << "First Name" << "|";
	std::cout.width(_max_length);
	std::cout << "Last Name" << "|";
	std::cout.width(_max_length);
	std::cout << "Nick Name" << std::endl;
}

void	Phonebook::_add() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;

	contacts[_actual_new_index % 8].setContact(
		_actual_new_index,
		first_name,
		last_name,
		nickname,
		darkest_secret
	);
	_actual_new_index++;
}

void	Phonebook::_search() {
	_showHeader();
	for (int i = 0; i < 8; i++)
		if (!contacts[i].is_empty)
			contacts[i].showContact(i, _max_length);
}

void	Phonebook::prompt() {
	bool		is_running = true;
	std::string	action;

	action = "EXIT";
	while (is_running)
	{
		if (action == "ADD")
			_add();
		else if (action == "SEARCH")
			_search();
		else if (action == "EXIT")
		{
			std::cout << "Exit" << std::endl;
			is_running = false;
		}
	}
}
