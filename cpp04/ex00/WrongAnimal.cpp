/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:34:04 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 16:40:28 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(): _type("None")
{
    std::cout << "WrongAnimal default copy constructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
    std::cout << "WrongAnimal copy constructor called\n";
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other)
{
    std::cout << "WrongAnimal operator= called\n";
    this->_type = other._type;
    return(*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound\n";
}

std::string	WrongAnimal::getType() const
{
    return (this->_type);
}