/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ShrubberyCreationForm.hpp                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/02 14:25:43 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/02 14:25:43 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

#define SIGN_GRADE 145
#define EXEC_GRADE 137

class ShrubberyCreationForm : public AForm
{
  public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();
	void executeAction(const Bureaucrat &executor) const;

	class FileNotOpenException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return (
				RED
				"ShrubberyCreationForm exception: File could not be opened" NC);
		}
	};

  private:
	const std::string _target;
};

/* ************************************************************************** */
