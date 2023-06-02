/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Form.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 09:25:36 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 09:25:36 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

/* **************************Public_member_functions************************* */

const std::string &Form::getName() const
{
	return (_name);
}

bool Form::getSignedness() const
{
	return (_is_signed);
}

int Form::getGradeToSign() const
{
	return (_grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (_grade_to_execute);
}

/* **************************Orthodox_Canonical_Form************************* */

Form::Form()
	: _name("Form"), _is_signed(false), _grade_to_sign(150),
	  _grade_to_execute(150)
{
	std::cout << GRN
			  << "Form's default constructor called, attributes:" << std::endl
			  << *this << NC;
}

Form::Form(const Form &rhs)
	: _name(rhs._name), _is_signed(rhs._is_signed),
	  _grade_to_sign(rhs._grade_to_sign),
	  _grade_to_execute(rhs._grade_to_execute)
{
	std::cout << GRN
			  << "Form's copy constructor called, attributes:" << std::endl
			  << *this << NC;
}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		_is_signed = rhs._is_signed;
		std::cout << GRN << "Form's assignment operator called, attributes:"
				  << std::endl
				  << *this << NC;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << BRED << _name << " called Form destructor at " << this << NC
			  << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	bool result = form.getSignedness();
	out << "Name: " << form.getName() << std::endl
		<< "Signed: " << (result ? "true" : "false") << std::endl
		<< "Grade required to sign: " << form.getGradeToSign() << std::endl
		<< "Grade required to execute: " << form.getGradeToExecute()
		<< std::endl;
	return (out);
}

/* ************************************************************************** */
