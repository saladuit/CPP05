/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   RobotomyRequestForm.hpp                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/07 15:18:46 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/07 15:18:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
#include <fstream>

#define ROB_SIGN_GRADE 72
#define ROB_EXEC_GRADE 45

class RobotomyRequestForm : public AForm
{
  public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();
	void execute(const Bureaucrat &executor) const;

  private:
	const std::string _target;
};

/* ************************************************************************** */
