/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:30:37 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/17 17:44:17 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	to_upper_alpha_in_str(std::string str)
{
	std::string	new_str;

	for (size_t i = 0; i < str.length(); i++)
	{
		new_str += std::toupper(str[i]);
	}
	return (new_str);
}

int	main(int argc, char *argv[])
{
	std::string	arg;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		arg = to_upper_alpha_in_str(argv[i]);
		std::cout << arg;
	}
	std::cout << std::endl;
}
