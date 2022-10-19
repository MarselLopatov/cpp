/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:13:40 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/19 13:39:43 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap( std::string name );
	DiamondTrap ( const DiamondTrap& other );
	DiamondTrap();
	~DiamondTrap();

	DiamondTrap	&operator=( const DiamondTrap& other );
	void whoAmI();
};

#endif