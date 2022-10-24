/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:13 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:51:10 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "None";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character default constructor\n";
}

Character::Character( std::string name )
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character constructor\n";
}

Character::Character( const Character& other )
{
	*this = other;
	std::cout << "Character copy constructor\n";
}

Character &Character::operator=( const Character& other )
{
	std::cout << "Character operator=\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor\n";
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::unequip( int idx )
{
	if (inventory[idx])
		inventory[idx] = NULL;
}

void Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++)
		if (!inventory[i])
		{
			inventory[i] = m->clone();
			return ;
		}
}

void Character::use( int idx, ICharacter& target )
{
	if (inventory[idx])
		inventory[idx]->use(target);
}
