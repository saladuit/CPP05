/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Animal.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:14:17 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:14:17 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

/* **************************Public_member_functions************************* */

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

/* **************************Orthodox_Canonical_Form************************* */

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1)
{
	std::cout << GRN << *this << " called default constructor" << NC
			  << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name)
{
	std::cout << GRN << *this << " called Copy constructor" << NC << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
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

Bureaucrat::~Bureaucrat()
{
	std::cout << BRED << _name << " called Bureaucrat destructor at " << this
			  << NC << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << " is a bureaucrat with a grade of "
		<< bureaucrat.getGrade();
	return (out);
}

/* ************************************************************************** */
