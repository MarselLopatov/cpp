/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:55:51 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:13:31 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): \
    Form(), _target("None")
{}

RobotomyRequestForm::RobotomyRequestForm( std::string name, std::string target ): \
    Form(name, 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ): \
    Form(other), _target(other._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
    this->_target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
    if (!this->get_fsined())
        throw Form::FormIsNotSignedExecption();
    if (executor.getGrade() > this->get_grade_execute())
        throw Form::GradeTooLowException();
    std::cout << executor.getName() << " executed " << this->get_name() << std::endl;
    std::cout << this->_target << " has been robotomized successfully 50% of all time.\n";
}
