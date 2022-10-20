/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:57:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/20 16:59:05 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

////////////////////////////////////////////////////////////////////////////////////////////
	const WrongAnimal*	wrong_meta = new WrongAnimal();
	const WrongAnimal*	wrong_cat = new WrongCat();
	
	std::cout << wrong_meta->getType() << " \n";
	std::cout << wrong_cat->getType() << " \n";
	wrong_meta->makeSound();
	wrong_cat->makeSound();
	return (0);
}
