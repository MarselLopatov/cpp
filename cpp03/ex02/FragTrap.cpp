/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:12:19 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 16:56:25 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Ohayo! It's FragTrap constructor!\n";
	_health = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called!\n";
	_health = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap( const FragTrap& other )
{
	std::cout << "FragTrap copy constructor called!\n";
	*this = other;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " wants to give you high five!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< _name << " died :c\n";
}

FragTrap	&FragTrap::operator=( const FragTrap& other )
{
	this->_name = other._name;
	return (*this);
}