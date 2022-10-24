/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:57:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 15:14:49 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *meta[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		meta[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete meta[i];
	return (0);
}
