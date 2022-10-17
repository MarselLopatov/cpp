/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:44:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 15:45:14 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("Jack");
	
	a.takeDamage(3);
	a.attack("Bob");
	a.beRepaired(3);
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.takeDamage(2);
	a.takeDamage(4);
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.attack("Bob");
	a.takeDamage(6);
	a.takeDamage(2);
	a.beRepaired(3);
	a.beRepaired(3);
}
