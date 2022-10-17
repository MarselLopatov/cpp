/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:34:53 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 13:45:13 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
// (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
// (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed ret1, ret2, ret3;

	ret1 =	(a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	ret2 =	(b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	ret3 =	(c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

	std::cout << "a=" << ret1 << std::endl;
	std::cout << "b=" << ret2 << std::endl;
	std::cout << "c=" << ret3 << std::endl;

	return ((ret1 > 0 && ret2 > 0 && ret3 > 0) || (ret1 < 0 && ret2 < 0 && ret3 < 0));
}
