/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:22:33 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/05 18:17:22 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType( std::string type )
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return (type);    
}

Weapon::Weapon( std::string type )
{
    this->type = type;
}

Weapon::~Weapon()
{}
