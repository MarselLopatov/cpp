/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:42:13 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/23 14:45:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie( std::string name )
{
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "";
}

void	Zombie::set_name( std::string name )
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << ": died..\n";
}