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

void testGradeMod(void (Bureaucrat::*func)(), const int repeatCount)
{
	Bureaucrat joe;
	try
	{
		for (int i = 0; i < repeatCount; ++i)
		{
			(joe.*func)();
		}
		std::cout << CYN << joe << NC;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testConstructors()
{
	Bureaucrat jack;
	jack.incrementGrade();
	std::cout << CYN << jack << NC;

	Bureaucrat jill(jack);
	jill.incrementGrade();
	std::cout << CYN << jill << NC;
	jack = jill;
}

int main()
{
	std::cout << "\n--Testing constructors--\n";
	testConstructors();

	std::cout << "\n--Testing GradeModifications--\n";
	testGradeMod(&Bureaucrat::incrementGrade, 1);
	testGradeMod(&Bureaucrat::decrementGrade, 2);
	testGradeMod(&Bureaucrat::incrementGrade, 150);

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
