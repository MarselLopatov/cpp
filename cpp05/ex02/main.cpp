/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:33:20 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:11:10 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	try
	{
		ShrubberyCreationForm	form1("Drow tree", "Tree");
		Bureaucrat				man("John", 1);
		
		form1.beSigned(man);
		form1.execute(man);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm		form2("Mr. Robot", "Robot");
		Bureaucrat				man("John", 1);

		form2.beSigned(man);
		form2.execute(man);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm	form3("Presidential pardon","President");
		Bureaucrat				man("John", 1);

		form3.beSigned(man);
		form3.execute(man);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
