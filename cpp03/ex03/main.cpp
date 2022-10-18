/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:44:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 16:55:14 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap a("Jack");
	ScavTrap b("LOL");
	FragTrap c("KEK");

	a.attack("Bob");
	a.takeDamage(6);
	a.beRepaired(3);

	b.attack("Bob");
	b.beRepaired(4);
	b.takeDamage(10);
	b.guardGate();

	c.attack("LOL");
	c.beRepaired(90);
	c.takeDamage(400);
	c.highFivesGuys();
}
