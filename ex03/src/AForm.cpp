/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   AForm.cpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 14:10:44 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 14:10:44 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

/* **************************Public_member_functions************************* */

const std::string &AForm::getName() const
{
	return (_name);
}

bool AForm::getSignedness() const
{
	return (_is_signed);
}

int AForm::getGradeToSign() const
{
	return (_grade_to_sign);
}

int AForm::getGradeToExecute() const
{
	return (_grade_to_execute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	std::cout << BCYN << "Checking grade to sign paper" << NC << std::endl;
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw AForm::GradeTooLowException();
	_is_signed = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	std::cout << BCYN << "Checking grade to execute paper" << NC << std::endl;
	if (executor.getGrade() > _grade_to_execute)
		throw AForm::GradeTooLowException();
	if (!_is_signed)
		throw AForm::FormNotSignedException();
}

/* **************************Orthodox_Canonical_Form************************* */

AForm::AForm(const std::string &name, const int grade_to_sign,
			 const int grade_to_execute)
	: _name(name), _is_signed(false), _grade_to_sign(grade_to_sign),
	  _grade_to_execute(grade_to_execute)
{
	std::cout << MAG
			  << "AForm" GRN "'s parameterized constructor called, attributes:"
			  << std::endl
			  << *this << NC;
	if (grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
		throw AForm::GradeTooLowException();
}

AForm::AForm()
	: _name("Paper"), _is_signed(false), _grade_to_sign(MIN_GRADE),
	  _grade_to_execute(MIN_GRADE)
{
	std::cout << MAG << "AForm" GRN "'s default constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

AForm::AForm(const AForm &rhs)
	: _name(rhs._name), _is_signed(rhs._is_signed),
	  _grade_to_sign(rhs._grade_to_sign),
	  _grade_to_execute(rhs._grade_to_execute)
{
	std::cout << MAG << "AForm" GRN "'s copy constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		_is_signed = rhs._is_signed;
		std::cout << MAG
				  << "AForm" GRN "'s assignment operator called, attributes:"
				  << std::endl
				  << *this << NC;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << BRED << _name << " called AForm destructor at " << this << NC
			  << std::endl;
}

std::ostream &operator<<(std::ostream &out, const AForm &a_form)
{
	out << "Name: " << a_form.getName() << std::endl
		<< "Signed: " << (a_form.getSignedness() ? "true" : "false")
		<< std::endl
		<< "Grade required to sign: " << a_form.getGradeToSign() << std::endl
		<< "Grade required to execute: " << a_form.getGradeToExecute()
		<< std::endl;
	return (out);
}

/* ************************************************************************** */
