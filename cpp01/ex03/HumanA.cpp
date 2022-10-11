/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:17:48 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/05 18:18:58 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{}

HumanA::HumanA( std::string name, const Weapon &weapon ) : name(name), weapon(weapon)
{}

void    HumanA::attack()
{
    std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}
