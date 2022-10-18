/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:12:21 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/18 17:56:28 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
public:
	FragTrap( std::string name );
	FragTrap( const FragTrap& other );
	FragTrap();
	~FragTrap();

	FragTrap&	operator=( const FragTrap& other );
	void		highFivesGuys(void);
};

#endif