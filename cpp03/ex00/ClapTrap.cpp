/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:53:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 15:47:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _health(10), _energy(10), _damage(0)
{}

void	ClapTrap::attack( const std::string& target )
{
	if (_health == 0 || _energy == 0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _damage << " points of damage!\n";
	_energy -= 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "DIED\n";
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << _name << " repairing " << amount << " amount of heath\n";
	_energy -= 1;
	_health += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ClapTrap " << _name << " deals " << _damage << " points of damage\n";
	if (_health <= 0)
		ClapTrap::~ClapTrap();
}
