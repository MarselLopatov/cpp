/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:13:34 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/19 14:15:19 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): 
	ClapTrap(name + "_Clap"), FragTrap(name + "_Frag"), ScavTrap(name + "_Scav")
{
	std::cout << "DiamondTrap contructor called\n";
	this->_name = name;
	FragTrap::_health = 100;
	ScavTrap::_energy = 50;
	FragTrap::_damage = 30;
}

DiamondTrap::DiamondTrap():
	ClapTrap("None_Clap"), FragTrap("None_Frag"), ScavTrap("None_Scav"), _name("None")
{
	std::cout << "DiamondTrap default contructor called\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ):
	ClapTrap(other._name + "_Clap"), FragTrap(other._name + "_Frag"), ScavTrap(other._name + "_Scav"), _name(other._name)
{
	std::cout << "DiamondTrap copy contcutor called\n";
	this->_health = other.FragTrap::_health;
	this->_energy = other.ScavTrap::_energy;
	this->_damage = other.FragTrap::_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " died!\n";
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout << "DiamondTrap operator =  was called\n";
	this->_name = other._name;
	this->ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
