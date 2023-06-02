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

void testGradeMod(void (Bureaucrat::*func)(), const std::string name,
				  const int age)
{
	try
	{
		Bureaucrat joe(name, age);
		(joe.*func)();
		std::cout << CYN << joe << NC;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void tryToCreateInstance(const std::string &name, int grade)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);
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
	tryToCreateInstance("John", MAX_GRADE / 2);
	tryToCreateInstance("JohnMaxBound", MAX_GRADE - 1);
	tryToCreateInstance("JohnMinBound", MIN_GRADE + 1);
}

int main()
{
	std::cout << "\n--Testing constructors--\n";
	testConstructors();

	std::cout << "\n--Testing GradeModifications--\n";
	testGradeMod(&Bureaucrat::incrementGrade, "Test Increment", MIN_GRADE / 2);
	testGradeMod(&Bureaucrat::decrementGrade, "Test Decrement", MIN_GRADE / 2);
	testGradeMod(&Bureaucrat::incrementGrade, "Test Increment over Max",
				 MAX_GRADE);
	testGradeMod(&Bureaucrat::decrementGrade, "Test Decrement over Min",
				 MIN_GRADE);

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
