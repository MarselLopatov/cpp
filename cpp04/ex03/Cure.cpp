/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:59:25 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:51:19 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor\n";
}

Cure::Cure( const Cure& other)
{
	std::cout << "Cure copy constructor\n";
	*this = other;
}

Cure &Cure::operator=( const Cure& other )
{
	this->_type = other._type;
	std::cout << "Cure operator=\n";
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor\n";
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
