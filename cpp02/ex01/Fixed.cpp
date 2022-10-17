/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:42:47 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/14 14:30:57 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::Fixed( const int value ) 
{
    std::cout << "Int constructor called\n";
    this->value = value << bits;
}

Fixed::Fixed( const float value ) 
{
    std::cout << "Float constructor called\n";
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    value = copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";

    this->value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->value);
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

float   Fixed::toFloat( void ) const
{
    return ((float)value / (1 << bits));
}

int		Fixed::toInt( void ) const
{
    return (this->value >> bits);
}

std::ostream&	operator<<( std::ostream& stream, const Fixed& copy )
{
    stream << copy.toFloat();
    return (stream);
}
