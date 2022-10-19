/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:44:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/19 14:23:13 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap a("LOL");
	DiamondTrap b("KEK");
	DiamondTrap c;

	c.whoAmI();

	c = b;

	a.attack("KEK");
	b.beRepaired(10);
	c.takeDamage(20);
	a.guardGate();
	b.highFivesGuys();
	c.attack("LOL");

	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
}
