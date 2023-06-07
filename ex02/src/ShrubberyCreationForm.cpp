/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ShrubberyCreationForm.cpp                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 14:39:11 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 14:39:11 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

/* **************************Public_member_functions************************* */

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::ofstream file;
	file.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	std::string filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	if (file.fail())
		throw FileNotOpenException();
	file << " _-_" << std::endl;
	file << " / \\ " << std::endl;
	file.close();
}

/* **************************Orthodox_Canonical_Form************************* */

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", SHUB_SIGN_GRADE, SHUB_EXEC_GRADE),
	  _target(target)
{
	std::cout << MAG
			  << "ShrubberyCreationForm" GRN
				 "'s parameterized constructor called, "
				 "attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", SHUB_SIGN_GRADE, SHUB_EXEC_GRADE),
	  _target("default")
{
	std::cout << MAG
			  << "ShrubberyCreationForm" GRN
				 "'s default constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: AForm(src), _target(src._target)
{
	std::cout << MAG
			  << "ShrubberyCreationForm" GRN
				 "'s copy constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		std::cout << MAG
				  << "ShrubberyCreationForm" GRN
					 "'s assignment operator called, attributes:"
				  << std::endl
				  << *this << "Target: " << _target << std::endl
				  << NC;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << BRED << this->getName()
			  << " called ShrubberyCreationForm destructor at " << this << NC
			  << std::endl;
}

/* ************************************************************************** */
