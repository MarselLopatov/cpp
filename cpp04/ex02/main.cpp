/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:57:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 15:24:19 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal* meta = new Animal(); error
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();

	delete i;
	delete j;

	return (0);
}
