/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchamard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:41:32 by lchamard          #+#    #+#             */
/*   Updated: 2026/06/29 17:07:25 by lchamard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	const AAnimal*		j = new Dog();
	const AAnimal*		i = new Cat();
	AAnimal*				k = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	k->makeSound();

	delete j;
	delete i;
	delete k;

	return 0;
}
