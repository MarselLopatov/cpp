/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:15:03 by cdoria            #+#    #+#             */
/*   Updated: 2022/08/20 19:16:10 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add()
{
	if (index == 8)
		index = 0;
	contacts[index++].new_contact();
	if (amount == 8)
		return ;
	amount++;
}

void	PhoneBook::search()
{
	if (index == 0)
	{
		std::cout << "\tAdd contact before search\n";
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int contact_number = 0; contact_number < amount; contact_number++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << contact_number + 1 << "|";
		std::cout.width(10);
		if (contacts[contact_number].getFirstName().size() <= 10)
			std::cout << contacts[contact_number].getFirstName() << "|";
		else
			std::cout << contacts[contact_number].getFirstName().substr(0, 9) + ".|";
		std::cout.width(10);
		if (contacts[contact_number].getLastName().size() <= 10)
			std::cout << contacts[contact_number].getLastName() << "|";
		else
			std::cout << contacts[contact_number].getLastName().substr(0, 9) + ".|";
		std::cout.width(10);
		if (contacts[contact_number].getNickname().size() <= 10)
			std::cout << contacts[contact_number].getNickname() << "|";
		else
			std::cout << contacts[contact_number].getNickname().substr(0, 9) + ".|";
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;

	int	i;
	while (1)
	{
		std::cout << "Enter index to display info: ";
		std::cin >> i;
		if (i < 0 || i > amount)
			std::cout << "wrong input\n";
		else
			break ;
	}
	std::cout << contacts[i - 1].getFirstName() << std::endl;
	std::cout << contacts[i - 1].getLastName() << std::endl;
	std::cout << contacts[i - 1].getNickname() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::end()
{
	std::cout << "Bye :3" << std::endl;
	exit(0);
}
