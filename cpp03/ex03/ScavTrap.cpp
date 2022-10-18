/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:05:32 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 17:34:44 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "Hello, it's ScavTrap constructor!\n";
	_health = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Hello, it's ScavTrap default constructor!\n";
	_health = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other )
{
	std::cout << "ScavTrap copy contructor called!\n";
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " died :c\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode.\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (_health <= 0 || _energy <= 0)
	{
		std::cout << "I can't do something, because i don't have hit points or energy point..\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _damage << " points of damage!\n";
	_energy -= 1;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& other )
{
	this->_name = other._name;
	return (*this);
}
