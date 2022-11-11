/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:58:07 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:14:30 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): \
    Form(), _target("None")
{}

PresidentialPardonForm::PresidentialPardonForm( std::string name, std::string target ): \
    Form(name, 145, 137), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ): \
    Form(other), _target(other._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other ) 
{
    this->_target = other._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
    if (!this->get_fsined())
        throw Form::FormIsNotSignedExecption();
    if (executor.getGrade() > this->get_grade_execute())
        throw Form::GradeTooLowException();
    std::cout << executor.getName() << " executed " << this->get_name() << std::endl;
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}
