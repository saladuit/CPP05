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
#include <ShrubberyCreationForm.hpp>

void testShubberuyCreationConstuctors()
{
	try
	{
		ShrubberyCreationForm form("bonsai");
		ShrubberyCreationForm form2(form);
		ShrubberyCreationForm form3;
		form3 = form2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testShubberyCreationForm()
{
	try
	{
		Bureaucrat jonas("Jonas", SHUB_EXEC_GRADE);
		ShrubberyCreationForm form("bonsai");
		jonas.signAForm(form);
		jonas.executeAForm(form);
		system("rm -rf bonsai_shrubbery");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testShubberyCreationFormSignTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", SHUB_SIGN_GRADE + 1);
		ShrubberyCreationForm form("bonsai");
		jonas.signAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testShubberyCreationFormExecuteTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", SHUB_EXEC_GRADE + 1);
		ShrubberyCreationForm form("bonsai");
		jonas.signAForm(form);
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testShubberyCreationFormNotSigned()
{
	try
	{
		Bureaucrat jonas("Jonas", SHUB_EXEC_GRADE);
		ShrubberyCreationForm form("bonsai");
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "\n--Testing Shubbery Creation Form Constructors--\n";
	testShubberuyCreationConstuctors();
	std::cout << "\n--Testing Shubbery Creation Form--\n";
	testShubberyCreationForm();
	std::cout << "\n--Testing Shubbery Creation Form Sign Too Low--\n";
	testShubberyCreationFormSignTooLow();
	std::cout << "\n--Testing Shubbery Creation Form Exec Too Low--\n";
	testShubberyCreationFormExecuteTooLow();
	std::cout << "\n--Testing Shubbery Creation Form not signed--\n";
	testShubberyCreationFormNotSigned();
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
