/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:20:13 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/29 13:20:13 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	_showHeader();
	for (int i = 0; i < 8; i++)
		if (!contacts[i].is_empty)
			contacts[i].showContact(i, _max_length);
}

void	Phonebook::prompt() {
	bool		is_running = true;
	std::string	action;

	while (is_running)
	{
		std::cout << "Enter command" << std::endl;
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
