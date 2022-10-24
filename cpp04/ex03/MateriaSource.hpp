/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:29:08 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/24 19:40:48 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *materia[4];

public:
	MateriaSource();
	MateriaSource( const MateriaSource& other );
	~MateriaSource();

	MateriaSource	&operator=( const MateriaSource& other );
	void			learnMateria( AMateria* m );
	AMateria*		createMateria( std::string const & type );
};

#endif