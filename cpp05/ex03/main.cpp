/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:33:20 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:06:21 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void )
{
	try
	{
		Form* rrf;
		Intern someRandomIntern;
		Bureaucrat man("John", 1);

		rrf = someRandomIntern.makeForm("ShrubberyForm", "Bender");
		rrf->beSigned(man);
		rrf->execute(man);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
