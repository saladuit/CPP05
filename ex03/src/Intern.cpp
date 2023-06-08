/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Intern.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/08 15:31:55 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/08 15:31:55 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

/* **************************Public_member_functions************************* */

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::cout << CYN << "Intern is searching for correct form " << NC
			  << std::endl;
	if (formName == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (formName == "presidential pardon")
		return (new PresidentialPardonForm(target));
	else if (formName == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else
	{
		std::cout << BRED << "Intern could not find the form you requested."
				  << NC << std::endl;
		return (NULL);
	}
}
/* **************************Orthodox_Canonical_Form************************* */

Intern::Intern()
{
	std::cout << BGRN << "Intern default constructor called at " << this << NC
			  << std::endl;
}
Intern::~Intern()
{
	std::cout << BRED << "Intern destructor called at " << this << NC
			  << std::endl;
}

/* ************************************************************************** */
