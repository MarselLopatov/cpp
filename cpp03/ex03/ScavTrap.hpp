/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:05:41 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 20:42:34 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap& other );
	ScavTrap();
	~ScavTrap();

	ScavTrap	&operator=( const ScavTrap& other );
	void 		guardGate();
	void 		attack(const std::string& target);
};

#endif