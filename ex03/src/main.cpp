/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:46 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

int main()
{
	Intern jonas;
	AForm *form;

	form = jonas.makeForm("robotomy request", "work");
	delete form;
	form = jonas.makeForm("presidential pardon", "hard");
	delete form;
	form = jonas.makeForm("shrubbery creation", "harder");
	delete form;
	form = jonas.makeForm("I don't exist", "Bender");
	delete form;
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
