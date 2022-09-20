/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:16:02 by cdoria            #+#    #+#             */
/*   Updated: 2022/08/20 18:48:12 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::new_contact()
{
	std::cout << "Enter firts name: ";
	std::cin >> first_name;
	std::cout << "Enter last name: ";
	std::cin >> last_name;
	std::cout << "Enter nickname: ";
	std::cin >> nickname;
	std::cout << "Enter phone number: ";
	std::cin >> phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> darkest_secret;
	std::cout << std::endl;
}

std::string	Contact::getFirstName()
{
	return (first_name);
}

std::string	Contact::getLastName()
{
	return (last_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getPhone()
{
	return (phone_number);
}
