/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:42:47 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/14 16:29:41 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed( const int value ) 
{
    this->value = value << bits;
}

Fixed::Fixed( const float value ) 
{
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
    value = copy.getRawBits();
}

Fixed::~Fixed()
{}

Fixed& Fixed::operator=(const Fixed& copy)
{
    this->value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void    Fixed::setRawBits( int const raw )
{
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

bool    Fixed::operator>( const Fixed& copy ) const
{
    return (this->value > copy.value);
}

bool	Fixed::operator<( const Fixed& copy ) const
{
    return (this->value < copy.value);
}

bool	Fixed::operator>=( const Fixed& copy ) const
{
    return (this->value >= copy.value);
}

bool	Fixed::operator<=( const Fixed& copy ) const
{
    return (this->value <= copy.value);
}

bool	Fixed::operator==( const Fixed& copy ) const
{
    return (this->value == copy.value);
}

bool	Fixed::operator!=( const Fixed& copy ) const
{
    return (this->value != copy.value);
}

Fixed	Fixed::operator+( const Fixed& copy )
{
    return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed	Fixed::operator-( const Fixed& copy )
{
    return(Fixed(this->toFloat() - copy.toFloat()));
}

Fixed	Fixed::operator*( const Fixed& copy )
{
    return(Fixed(this->toFloat() * copy.toFloat()));
}

Fixed	Fixed::operator/( const Fixed& copy )
{
    return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed&	Fixed::operator++( void )
{
    this->value++;
    return (*this);
}

Fixed&	Fixed::operator--( void )
{
    this->value--;
    return (*this);
}

Fixed	Fixed::operator++( int )
{
    Fixed   obj = *this;

    ++*this;
    return (obj);
}

Fixed	Fixed::operator--( int )
{
    Fixed   obj = *this;

    --*this;
    return (obj);
}

Fixed&	Fixed::min( Fixed& one, Fixed& two )
{
    if (one > two)
        return (two);
    return (one);
}

const Fixed&	Fixed::min( const Fixed &one, const Fixed& two )
{
    if (one > two)
        return (two);
    return (one);
}

Fixed&	Fixed::max( Fixed &one, Fixed& two )
{
    if (one > two)
        return (one);
    return (two);
}

const Fixed&	Fixed::max( const Fixed &one, const Fixed& two )
{
    if (one > two)
        return (one);
    return (two);
}
