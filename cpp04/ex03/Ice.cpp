/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:58:38 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:17:20 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor\n";
}

Ice::Ice( const Ice& other)
{
	std::cout << "Ice copy constructor\n";
	*this = other;
}

Ice &Ice::operator=( const Ice& other )
{
	this->_type = other._type;
	std::cout << "Ice operator=\n";
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor\n";
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
