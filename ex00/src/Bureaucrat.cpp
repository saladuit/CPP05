/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Bureaucrat.cpp                                  |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 09:25:58 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 09:25:58 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

/* **************************Public_member_functions************************* */

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

/* **************************Orthodox_Canonical_Form************************* */

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{
	std::cout << GRN << "Bureaucrat's default constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
	: _name(rhs._name), _grade(rhs._grade)
{
	std::cout << GRN << "Bureaucrat's copy constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
		std::cout << GRN
				  << "Bureaucrat's assignment operator called, attributes:"
				  << std::endl
				  << *this << NC;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BRED << _name << " called Bureaucrat destructor at " << this
			  << NC << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << "Name: " << bureaucrat.getName() << std::endl
		<< "Grade: " << bureaucrat.getGrade() << std::endl;
	return (out);
}

/* ************************************************************************** */
