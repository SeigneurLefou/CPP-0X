/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:20:13 by lchamard          #+#    #+#             */
/*   Updated: 2026/07/03 12:56:29 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	str_in_chr_of_str(std::string chr_list, std::string str) {
	bool	ret_value;

	for (size_t i = 0; i < str.length(); ++i) {
		ret_value = false;
		for (size_t j = 0; j < chr_list.length(); ++j) {
			if (str[i] == chr_list[j])
				ret_value = true;
		}
		if (!ret_value)
			return (ret_value);
	}
	return (ret_value);
}

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

static std::string	promptInfo(std::string message)
{
	std::string	info;

	while (!info.length())
	{
		std::cout << "Enter " << message << " : ";
		std::getline(std::cin, info);
	}
	return (info);
}

void	Phonebook::_add() {
	std::string first_name = promptInfo("first name");
	std::string last_name = promptInfo("last name");
	std::string nickname = promptInfo("nickname");
	std::string phone_number = promptInfo("phone number");
	std::string darkest_secret = promptInfo("dark secret");

	contacts[_actual_new_index % 8].setContact(
		_actual_new_index,
		first_name,
		last_name,
		nickname,
		phone_number,
		darkest_secret
	);
	_actual_new_index++;
}

void	Phonebook::_search() {
	std::string	str_id;
	int			id;

	if (contacts[0].is_empty)
	{
		std::cerr << "phonebook is empty" << std::endl;
		return ;
	}
	_showHeader();
	for (int i = 0; i < 8; i++)
		if (!contacts[i].is_empty)
			contacts[i].showTableContact(i, _max_length);
	str_id = promptInfo("contact id");
	if (!str_in_chr_of_str("0123456789", str_id))
	{
		std::cerr << "invalid id" << std::endl;
		return ;
	}
	id = atoi(str_id.c_str());
	if (0 <= id && id < std::min(8, this->_actual_new_index)) {
		this->contacts[id].showContact();
	} else {
		std::cerr << "invalid id" << std::endl;
	}
}

void	Phonebook::prompt() {
	bool		is_running = true;
	std::string	action;

	while (is_running)
	{
		std::cout << "> ";
		std::getline(std::cin, action);
		if (action == "ADD")
			_add();
		else if (action == "SEARCH")
			_search();
		else if (action == "EXIT")
			is_running = false;
		else
			std::cout << "Invalid command. Use ADD, SEARCH or EXIT" << std::endl;
	}
}
