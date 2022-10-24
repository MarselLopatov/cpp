/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:51:00 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:19:36 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "None";
	std::cout << "AMateria default constructor\n";
}

AMateria::AMateria( std::string const & type )
{
	this->_type = type;
	std::cout << "AMateria constructor\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor\n";
}

std::string const & AMateria::getType() const
{
	return (_type);
}
