/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:52:28 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 00:39:11 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("None"), _grade(150)
{}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::TooLowGradeExeption();
	if (_grade < 1)
		throw Bureaucrat::TooHighGradeExeption();
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ): _name(other._name), _grade(other._grade)
{}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other )
{
	this->_grade = other._grade;
	return (*this);
}

const char* Bureaucrat::TooLowGradeExeption::what() const throw()
{
	return ("Grade is too low");
}

const char* Bureaucrat::TooHighGradeExeption::what() const throw()
{
	return ("Grade is too high");
}

void Bureaucrat::increment()
{
	if (++_grade > 150)
		throw Bureaucrat::TooLowGradeExeption();
}

void Bureaucrat::decrement()
{
	if (--_grade < 1)
		throw Bureaucrat::TooHighGradeExeption();
}

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

Bureaucrat::~Bureaucrat()
{}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& other )
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << ".\n";
	return (out);
}

void Bureaucrat::signForm( Form &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.get_name() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " could't sign " << form.get_name() << " because " << e.what() << std::endl; 
	}
}
