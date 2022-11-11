/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:52:35 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 00:35:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	class TooLowGradeExeption : public std::exception
	{
		const char* what() const throw();
	};

	class TooHighGradeExeption : public std::exception
	{
		const char* what() const throw();
	};

	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat& other );
	~Bureaucrat();

	Bureaucrat&			operator=( const Bureaucrat& other );
	const std::string	getName() const;
	int					getGrade() const;
	void				increment();
	void				decrement();
	void				signForm( Form &form );
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& other );

#endif