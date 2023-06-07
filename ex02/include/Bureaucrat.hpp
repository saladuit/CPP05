/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Bureaucrat.hpp                                  |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 17:48:11 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 17:48:11 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <Color.hpp>
#include <Defines.hpp>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

class AForm;

class Bureaucrat
{
  public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &rhs);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signAForm(AForm &form) const;
	void executeAForm(AForm const &form) const;

	class GradeTooHighException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "Bureaucrat exception: Grade is too high" NC);
		}
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "Bureaucrat exception: Grade is too low" NC);
		}
	};

  private:
	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif

/* ************************************************************************** */
