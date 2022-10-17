/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:31:21 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/17 15:35:25 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(4.6f, 1.02f);
	Point b(7.6f, 4.38f);
	Point c(12.14f, 2.58f);

	Point p_1(7.2f, 1.9f);
	Point p_2(10.2f, 3.5f);


	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "p_1 = " << p_1 << std::endl;
	std::cout << "p_2 = " << p_2 << std::endl;

	if (bsp(a, b, c, p_1))
		std::cout << "WIN" << std::endl;
	else
		std::cout << "LOSE" << std::endl;
}
