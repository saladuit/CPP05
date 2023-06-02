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

#include <AForm.hpp>

void testSignFormAlreadySigned()
{
	try
	{
		Bureaucrat jonas("Jonas", 50);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

// void tryToCreateInstance(const std::string &name, const int grade_to_sign,
// 						 const int grade_to_execute)
// {
// 	try
// 	{
// 		Form form(name, grade_to_sign, grade_to_execute);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// }
//
// void testConstructors()
// {
// 	Form ticket;
// 	Form contract(ticket);
// 	contract = ticket;
// }
//
// void testParameterizedConstructor()
// {
// 	tryToCreateInstance("Parameterized", MIN_GRADE / 2, MIN_GRADE / 2);
// 	tryToCreateInstance("ParameterizedSignTooLow", MIN_GRADE + 1,
// 						MIN_GRADE / 2);
// 	tryToCreateInstance("ParameterizedExecuteTooLow", MIN_GRADE / 2,
// 						MIN_GRADE + 1);
// 	tryToCreateInstance("ParameterizedSignTooHigh", MAX_GRADE - 1,
// 						MIN_GRADE / 2);
// 	tryToCreateInstance("ParameterizedExecuteTooHigh", MIN_GRADE / 2,
// 						MAX_GRADE - 1);
// }

void testAFormIsAbstract()
{
	// AForm form;
}

int main()
{
	std::cout << "\n--Uncomment to Test abstraction of AForm--\n";
	testAFormIsAbstract();

	// std::cout << "\n--Testing constructors--\n";
	// testConstructors();
	// std::cout << "\n--Testing Parameterized constructor--\n";
	// testParameterizedConstructor();
	// std::cout << "\n--Testing SignForm--\n";
	// testSignForm();
	// std::cout << "\n--Testing SignForm GradeTooLowException--\n";
	// testSignFormGradeTooLowException();
	std::cout << "\n--Testing SignForm already signed--\n";
	testSignFormAlreadySigned();

	// std::cout << "\n--Testing GradeModifications--\n";
	// testGradeMod(&Bureaucrat::incrementGrade, 1);
	// testGradeMod(&Bureaucrat::decrementGrade, 2);
	// testGradeMod(&Bureaucrat::incrementGrade, 150);

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
