/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:35:59 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 15:22:07 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	_type;

public:
	Animal( std::string type );
	Animal( const Animal& other );
	Animal();
	virtual ~Animal();

	Animal&			operator=( const Animal& other );
	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif