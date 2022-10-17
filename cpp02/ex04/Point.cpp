/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:32:26 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 10:04:44 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{}

Point::Point( float x, float y )
{
    this->_x = Fixed(x);
    this->_y = Fixed(y);
}

Point::~Point()
{}

Point& Point::operator=( const Point& copy )
{
    this->_x = copy._x;
    this->_y = copy._y;
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