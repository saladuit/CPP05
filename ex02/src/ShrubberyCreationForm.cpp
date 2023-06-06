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
#include <fstream>

/* **************************Public_member_functions************************* */

void ShrubberyCreationForm::executeAction(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << " _-_" << std::endl;
	file << " / \\ " << std::endl;
	file.close();
}

/* **************************Orthodox_Canonical_Form************************* */

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", SIGN_GRADE, EXEC_GRADE), _target(target)
{
	std::cout << GRN
			  << "ShrubberyCreationForm's parameterized constructor called, "
				 "attributes:"
			  << std::endl
			  << *this << NC;
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", SIGN_GRADE, EXEC_GRADE), _target("default")
{
	std::cout
		<< GRN
		<< "ShrubberyCreationForm's default constructor called, attributes:"
		<< std::endl
		<< *this << NC;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: AForm(src), _target(src._target)
{
	std::cout << GRN
			  << "ShrubberyCreationForm's copy constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		std::cout
			<< GRN
			<< "ShrubberyCreationForm's assignment operator called, attributes:"
			<< std::endl
			<< *this << NC;
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
