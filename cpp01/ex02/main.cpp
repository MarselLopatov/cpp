/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:45:37 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/28 17:02:35 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string message = "HI THIS IS BRAIN";
	std::string	*stringPTR = &message;
	std::string	&stringREF = message;

	std::cout << "The memory address of the string variable: " << &message << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;

	std::cout << "The value of the string variable: " << message << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
