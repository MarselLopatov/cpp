/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:32:26 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 15:35:01 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{}

Point::Point( float x, float y ): _x(Fixed(x)), _y(Fixed(y))
{}

Point::~Point()
{}

Point &Point::operator=( const Point& copy )
{
    (void) copy;
    return (*this);
}

float Point::getX() const
{
    return (this->_x.toFloat());
}

float Point::getY() const
{
    return (this->_y.toFloat());
}

std::ostream&	operator<<( std::ostream& stream, const Point& copy )
{
    stream << copy.getX() << " " << copy.getY();
    return (stream);
}
