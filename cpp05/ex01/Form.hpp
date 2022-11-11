/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:30:12 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/10 00:35:22 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    const int           _grade_signed;
    const int           _grade_execute;
    bool                _fsigned;

public:
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };

    class FormAlreadySignedExecption : public std::exception
    {
        const char *what() const throw();
    };

    Form();
    Form( std::string name, int grade_s, int grade_e );
    Form( const Form &other );
    ~Form();

    Form        &operator=( const Form &other );
    std::string get_name() const;
    int         get_grade_signed() const;
    int         get_grade_execute() const;
    bool        get_fsined() const;
    void        beSigned( Bureaucrat &bureaucrat );
};

std::ostream&	operator<<( std::ostream& out, const Form& other );

#endif