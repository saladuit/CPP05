/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Form.hpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 09:00:15 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 09:00:15 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <Color.hpp>
#include <Defines.hpp>
#include <iostream>
#include <ostream>
#include <string>

class Form
{
  public:
	Form();
	Form(const Form &rhs);
	Form &operator=(const Form &rhs);
	~Form();
	const std::string &getName() const;
	bool getSignedness() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	class GradeTooHighException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "Form exception: Grade is too high" NC);
		}
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "Form exception: Grade is too low" NC);
		}
	};

  private:
	const std::string _name;
	bool _is_signed;
	const int _grade_to_sign;
	const int _grade_to_execute;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif

/* ************************************************************************** */
