/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   AForm.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 14:08:11 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 14:08:11 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <Bureaucrat.hpp>
#include <Color.hpp>
#include <Defines.hpp>
#include <iostream>
#include <ostream>
#include <string>

class AForm
{
  public:
	AForm(const std::string &name, const int grade_to_sign,
		  const int grade_to_execute);
	AForm();
	AForm(const AForm &rhs);
	AForm &operator=(const AForm &rhs);
	virtual ~AForm() = 0;
	const std::string &getName() const;
	bool getSignedness() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(const Bureaucrat &bureaucrat);
	void execute(const Bureaucrat &executor) const;

	class GradeTooHighException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "AForm exception: Grade is too high" NC);
		}
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "AForm exception: Grade is too low" NC);
		}
	};

	class FormNotSignedException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (RED "AForm exception: Form is not signed" NC);
		}
	};

  protected:
	virtual void executeAction(const Bureaucrat &executor) const = 0;

  private:
	const std::string _name;
	bool _is_signed;
	const int _grade_to_sign;
	const int _grade_to_execute;
};

std::ostream &operator<<(std::ostream &out, const AForm &a_form);

#endif

/* **************************************************************************
 */
