/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   PresidentialPardonForm.cpp                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/07 15:43:14 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/07 15:43:14 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

/* **************************Public_member_functions************************* */

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::cout << "Zafod Beeblebrox pardons " << _target << " from the "
			  << getName() << "." << std::endl;
}

/* **************************Orthodox_Canonical_Form************************* */

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", PRES_SIGN_GRADE, PRES_EXEC_GRADE),
	  _target(target)
{
	srand(time(NULL));
	std::cout << MAG
			  << "PresidentialPardonForm" GRN
				 "'s parameterized constructor called, "
				 "attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", PRES_SIGN_GRADE, PRES_EXEC_GRADE),
	  _target("default")
{
	srand(time(NULL));
	std::cout << MAG
			  << "PresidentialPardonForm" GRN
				 "'s default constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

PresidentialPardonForm::PresidentialPardonForm(
	const PresidentialPardonForm &src)
	: AForm(src), _target(src._target)
{
	srand(time(NULL));
	std::cout << MAG
			  << "PresidentialPardonForm" GRN
				 "'s copy constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		std::cout << MAG
				  << "PresidentialPardonForm" GRN
					 "'s assignment operator called, attributes:"
				  << std::endl
				  << *this << "Target: " << _target << std::endl
				  << NC;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << BRED << this->getName()
			  << " called PresidentialPardonForm destructor at " << this << NC
			  << std::endl;
}

/* ************************************************************************** */
