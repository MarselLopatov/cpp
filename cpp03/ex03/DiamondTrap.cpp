/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:13:34 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 20:40:27 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): 
	ClapTrap(name + "_Clap"), FragTrap(name + "_Frag"), ScavTrap(name + "_Scav")
{
	std::cout << "DiamondTrap contructor called\n";
	this->_name = name;

}

DiamondTrap::DiamondTrap():
	ClapTrap("None_Clap"), FragTrap("None_Frag"), ScavTrap("None_Scav")
{
	std::cout << "DiamondTrap default contructor called\n";
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap& other )
{
	this->_name = other._name;
	return (*this);
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	std::cout << "DiamondTrap copy contcutor called\n";
	*this = other;
}
