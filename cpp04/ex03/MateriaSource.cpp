/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:32:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:15:13 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "MateriaSource constructor\n";
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	*this = other;
	std::cout << "MateriaSource copy constructor\n";
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor\n";
}

MateriaSource &MateriaSource::operator=( const MateriaSource& other )
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
		materia[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
	}
	std::cout << "MateriaSource operator=\n";
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!materia[i])
		{
			materia[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]->clone());
	}
	return (NULL);
}
