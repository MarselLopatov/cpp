/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:36 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 16:52:53 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal();
	~WrongAnimal();

	WrongAnimal&	operator=( const WrongAnimal& other );
	void			makeSound() const;
	std::string		getType() const;
};

#endif