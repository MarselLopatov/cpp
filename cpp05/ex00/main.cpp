/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:29:01 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/08 11:00:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		std::cout << "Test1: ";
		Bureaucrat b1("Jack", 140);
		std::cout << b1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
