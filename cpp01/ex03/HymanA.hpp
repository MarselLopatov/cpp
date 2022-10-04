/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HymanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:18:50 by cdoria            #+#    #+#             */
/*   Updated: 2022/09/28 17:30:22 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon      weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon weapon);
    ~HumanA();
    void    attack();
};

#endif