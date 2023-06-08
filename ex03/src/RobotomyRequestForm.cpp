/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   RobotomyRequestForm.cpp                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/07 15:15:28 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/07 15:15:28 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

/* **************************Public_member_functions************************* */

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::cout << CYN << "DZZZZZZ" << NC << std::endl;
	if (rand() % 2)
		std::cout << GRN << _target << " has been robotomized successfully"
				  << NC << std::endl;
	else
		std::cout << YEL << _target << " has failed to be robotomized" << NC
				  << std::endl;
}

/* **************************Orthodox_Canonical_Form************************* */

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", ROB_SIGN_GRADE, ROB_EXEC_GRADE),
	  _target(target)
{
	srand(time(NULL));
	std::cout << MAG
			  << "RobotomyRequestForm" GRN
				 "'s parameterized constructor called, "
				 "attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", ROB_SIGN_GRADE, ROB_EXEC_GRADE),
	  _target("default")
{
	srand(time(NULL));
	std::cout << MAG
			  << "RobotomyRequestForm" GRN
				 "'s default constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: AForm(src), _target(src._target)
{
	srand(time(NULL));
	std::cout << MAG
			  << "RobotomyRequestForm" GRN
				 "'s copy constructor called, attributes:"
			  << std::endl
			  << *this << "Target: " << _target << std::endl
			  << NC;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		std::cout << MAG
				  << "RobotomyRequestForm" GRN
					 "'s assignment operator called, attributes:"
				  << std::endl
				  << *this << "Target: " << _target << std::endl
				  << NC;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << BRED << this->getName()
			  << " called RobotomyRequestForm destructor at " << this << NC
			  << std::endl;
}

/* ************************************************************************** */
