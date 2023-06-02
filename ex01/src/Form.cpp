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
	return (_grade);
}

int Form::getGradeToExecute() const
{
	return (_grade_to_execute);
}

/* **************************Orthodox_Canonical_Form************************* */

Form::Form() : _name("Form"), _grade(150)
{
	std::cout << GRN << *this << " called default constructor" << NC
			  << std::endl;
}

Form::Form(const Form &rhs) : _name(rhs._name), _grade(rhs._grade)
{
	std::cout << GRN << *this << " called Copy constructor" << NC << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
		std::cout << GRN << *this << " called assignment operator" << NC
				  << std::endl;
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
	out << form.getName() << ", form grade " << form.getGrade();
	return (out);
}

/* ************************************************************************** */
