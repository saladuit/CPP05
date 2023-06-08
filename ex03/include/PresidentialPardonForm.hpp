/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   PresidentialPardonForm.hpp                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/07 15:41:39 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/07 15:41:39 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
#include <fstream>

#define PRES_SIGN_GRADE 25
#define PRES_EXEC_GRADE 5

class PresidentialPardonForm : public AForm
{
  public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();
	void execute(const Bureaucrat &executor) const;

  private:
	const std::string _target;
};

/* ************************************************************************** */
