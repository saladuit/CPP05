/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Intern.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/06/08 15:10:58 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/06/08 15:10:58 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <AForm.hpp>
#include <Color.hpp>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

class Intern
{
  public:
	Intern();
	~Intern();
	AForm *makeForm(const std::string &formName, const std::string &target);

  private:
	Intern(const Intern &rhs);
	Intern &operator=(const Intern &rhs);
};

#endif

/* ************************************************************************** */
