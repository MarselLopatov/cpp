/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:39:48 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 17:59:51 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): \
    _name("None"), _grade_signed(150), _grade_execute(150), _fsigned(false)
{}

Form::Form( std::string name, int grade_s, int grade_e ): \
    _name(name), _grade_signed(grade_s), _grade_execute(grade_e), _fsigned(false)
{
    if (grade_s > 150 || grade_e > 150)
        throw GradeTooLowException();
    else if (grade_s < 1 || grade_e < 1)
        throw GradeTooHighException();
}

Form::Form( const Form &other ): \
    _name(other._name), _grade_signed(other._grade_signed), _grade_execute(other._grade_execute), _fsigned(other._fsigned)
{}

Form &Form::operator=( const Form &other )
{
    this->_fsigned = other._fsigned;
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char *Form::FormAlreadySignedExecption::what() const throw()
{
    return ("Form is already signed!");
}

const char *Form::FormIsNotSignedExecption::what() const throw()
{
    return ("Form is not signed!");
}

Form::~Form()
{}

std::string Form::get_name() const
{ return _name; }

int Form::get_grade_signed() const
{ return _grade_signed; }

int Form::get_grade_execute() const
{ return _grade_execute; }

bool Form::get_fsined() const
{ return _fsigned; }

std::ostream&	operator<<( std::ostream& out, const Form& other )
{
    out << "_name = " << other.get_name() << std::endl;
    out << "_fsigned = " << other.get_fsined() << std::endl;
    out << "_grade_execute = " << other.get_grade_execute() << std::endl;
    out << "_grade_signed = " << other.get_grade_signed() << std::endl;
    return (out);
}

void Form::beSigned( Bureaucrat &bureaucrat )
{
    if (this->_fsigned)
        throw FormAlreadySignedExecption();
    else if (bureaucrat.getGrade() > this->_grade_execute)
        throw GradeTooLowException();
    else
        this->_fsigned = true;
}
