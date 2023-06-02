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

#include <Bureaucrat.hpp>

int main()
{
	Bureaucrat joe;

	std::cout << "\n--Testing with a valid grade--\n";
	try
	{
		joe.incrementGrade();
		std::cout << CYN << joe << NC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--Testing GradeTooLowException--\n";
	try
	{
		for (int i = 0; i < 2; i++)
			joe.decrementGrade();
		std::cout << joe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--Testing GradeTooHighException--\n";
	try
	{
		for (int i = 0; i < 150; i++)
			joe.incrementGrade();
		std::cout << joe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
