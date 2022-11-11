/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:45:42 by cdoria            #+#    #+#             */
/*   Updated: 2022/11/11 18:13:49 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): \
    Form(), _target("None")
{}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name, std::string target ): \
    Form(name, 25, 5), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ): \
    Form(other), _target(other._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
    this->_target = other._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
    std::ofstream   out_file;

    if (!this->get_fsined())
        throw Form::FormIsNotSignedExecption();
    if (executor.getGrade() > this->get_grade_execute())
        throw Form::GradeTooLowException();
    std::cout << executor.getName() << " executed " << this->get_name() << std::endl;
    out_file.open((this->_target + "_shrubbery").c_str());
    out_file << "                                 .         ;  \n"
             << "    .              .              ;%     ;;   \n"
             << "      ,           ,                :;%  %;   \n"
             << "       :         ;                   :;%;'     .,\n"   
           << ",.        %;     %;            ;        %;'    ,;\n"
           << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
           << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
           << "    ;%;      %;        ;%;        % ;%;  ,%;'\n"
           << "     `%;.     ;%;     %;'         `;%%;.%;'\n"
           << "      `:;%.    ;%%. %@;        %; ;@%;%'\n"
           << "         `:%;.  :;bd%;          %;@%;'\n"
           << "           `@%:.  :;%.         ;@@%;'   \n"
           << "             `@%.  `;@%.      ;@@%;         \n"
           << "               `@%%. `@%%    ;@@%;        \n"
           << "                 ;@%. :@%%  %@@%;       \n"
           << "                   %@bd%%%bd%%:;     \n"
           << "                     #@%%%%%:;;      \n"    
           << "                     %@@%%%::;;      \n"
           << "                     %@@@%(o);  . '   \n"   
           << "                     %@@@o%;:(.,'         \n"
           << "                 `.. %@@@o%::;         \n"
           << "                    `)@@@o%::;         \n"
           << "                     %@@(o)::;        \n"
           << "                    .%@@@@%::;         \n"
           << "                    ;%@@@@%::;.          \n"
           << "                   ;%@@@@%%:;;;. \n"
           << "               ...;%@@@@@%%:;;;;,..\n";
    out_file.close();
}
