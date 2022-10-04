/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:50:05 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/04 17:42:30 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	menu()
{
	std::cout << "Just type command you need:"
				<< "\n1)Add\n2)Search\n3)Exit\n" << std::endl;
}

int main(void)
{
	PhoneBook	phonebook;
	std::string command;

	while (1)
	{
		menu();
		std::cout << ": ";
		std::cin >> command;
		if (command == "Add" || command == "1")
			phonebook.add();
		else if (command == "Search" || command == "2")
			phonebook.search();
		else if (command == "Exit" || command == "3")
			phonebook.end();
		else
			std::cout << "try again ^^\n";
	}
}
