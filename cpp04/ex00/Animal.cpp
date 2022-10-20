/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:42:44 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/19 17:03:52 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ): _type(type)
{}

Animal::Animal(): _type("None")
{}

Animal::Animal( const Animal& other )
{
    *this = other;
}

Animal& Animal::operator=( const Animal& other)
{
    this->_type = other._type;
    return(*this);
}