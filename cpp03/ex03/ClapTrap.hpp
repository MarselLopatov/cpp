/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:53:55 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 17:34:53 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAT_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_damage;

public:
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& other );
	ClapTrap();
	~ClapTrap();

    ClapTrap	&operator=( const ClapTrap& copy );
	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
};

#endif