/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:18:02 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/06 20:11:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{}

HumanB::HumanB( std::string name )
{
    this->name = name;
}

void    HumanB::attack()
{
    std::cout << name << "attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon( const Weapon &weapon )
{
    this->weapon = &weapon;
}
