/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:42:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 15:22:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ): _type(type)
{
    std::cout << "Animal constructor called\n";
}

Animal::Animal(): _type("None")
{
    std::cout << "Animal default constructor called\n";
}

Animal::Animal( const Animal& other )
{
    std::cout << "Animal copy constructor called\n";
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal& Animal::operator=( const Animal& other)
{
    std::cout << "Animal operator= called\n";
    this->_type = other._type;
    return(*this);
}

// void    Animal::makeSound() const
// {
//     std::cout << "Animal sound\n";
// }

std::string	Animal::getType() const
{
    return (this->_type);
}