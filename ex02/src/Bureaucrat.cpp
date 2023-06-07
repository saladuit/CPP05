/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Bureaucrat.cpp                                  |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 09:25:42 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 09:25:42 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
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
	if (_grade <= MAX_GRADE)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= MIN_GRADE)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signAForm(AForm &form) const
{
	if (form.getSignedness())
	{
		std::cout << YEL << _name << " couldn't " << form.getName()
				  << " because " << form.getName() << " is already signed" << NC
				  << std::endl;
		return;
	}
	form.beSigned(*this);
	std::cout << CYN << _name << " signed " << form.getName() << NC
			  << std::endl;
}

void Bureaucrat::executeAForm(AForm const &form) const
{
	form.execute(*this);
	std::cout << CYN << _name << " executed " << form.getName() << NC
			  << std::endl;
}

/* **************************Orthodox_Canonical_Form************************* */

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name), _grade(grade)
{
	std::cout << MAG
			  << "Bureaucrat" GRN
				 "'s parameterized constructor called, attributes:"
			  << std::endl
			  << *this << NC;
	if (_grade < MAX_GRADE)
		throw GradeTooHighException();
	if (_grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(MIN_GRADE)
{
	std::cout << MAG
			  << "Bureaucrat" GRN "'s default constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
	: _name(rhs._name), _grade(rhs._grade)
{
	std::cout << MAG
			  << "Bureaucrat" GRN "'s copy constructor called, attributes:"
			  << std::endl
			  << *this << NC;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		_grade = rhs._grade;
		std::cout << MAG
				  << "Bureaucrat" GRN
					 "'s assignment operator called, attributes:"
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
