/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:53:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 16:49:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "Hi, that's ClapTrap constructor!\n";
}

ClapTrap::ClapTrap(): _name("None"),  _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called!\n";
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "ClapTrap copy contructor called!\n";
	*this = other;
}

void	ClapTrap::attack( const std::string& target )
{
	if (_health <= 0 || _energy <= 0)
	{
		std::cout << "I can't do something, because i don't have hit points or energy point..\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _damage << " points of damage!\n";
	_energy -= 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " died :c\n";
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_health <= 0 || _energy <= 0)
	{
		std::cout << "I can't do something, because i don't have hit points or energy point..\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairing " << amount << " amount of heath\n";
	_energy -= 1;
	_health += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		std::cout << "Oh i don't have hit point, therefore i can't take any damage\n";
		return ;
	}
	_health -= amount;
	std::cout << "ClapTrap " << _name << " deals " << amount << " points of damage\n";
	if (_health <= 0)
		ClapTrap::~ClapTrap();
}

ClapTrap   &ClapTrap::operator=( const ClapTrap& copy )
{
	this->_name = copy._name;
	return (*this);
}
