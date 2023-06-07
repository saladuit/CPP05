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
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
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
void testShubbery()
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
}

void testRobotomyRequestConstuctors()
{
	try
	{
		RobotomyRequestForm form("robot");
		RobotomyRequestForm form2(form);
		RobotomyRequestForm form3;
		form3 = form2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testRobotomyRequestForm()
{
	try
	{
		Bureaucrat jonas("Jonas", ROB_EXEC_GRADE);
		RobotomyRequestForm form("robot");
		jonas.signAForm(form);
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testRobotomyRequestFormSignTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", ROB_SIGN_GRADE + 1);
		RobotomyRequestForm form("robot");
		jonas.signAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testRobotomyRequestFormExecuteTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", ROB_EXEC_GRADE + 1);
		RobotomyRequestForm form("robot");
		jonas.signAForm(form);
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testRobotomyRequestFormNotSigned()
{
	try
	{
		Bureaucrat jonas("Jonas", ROB_EXEC_GRADE);
		RobotomyRequestForm form("robot");
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testRobotomy()
{
	std::cout << "\n--Testing Robotomy Creation Form Constructors--\n";
	testRobotomyRequestConstuctors();
	std::cout << "\n--Testing Robotomy Creation Form--\n";
	testRobotomyRequestForm();
	std::cout << "\n--Testing Robotomy Creation Form Sign Too Low--\n";
	testRobotomyRequestFormSignTooLow();
	std::cout << "\n--Testing Robotomy Creation Form Exec Too Low--\n";
	testRobotomyRequestFormExecuteTooLow();
	std::cout << "\n--Testing Robotomy Creation Form not signed--\n";
	testRobotomyRequestFormNotSigned();
}

void testPresidentialPardonConstuctors()
{
	try
	{
		PresidentialPardonForm form("president");
		PresidentialPardonForm form2(form);
		PresidentialPardonForm form3;
		form3 = form2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testPresidentialPardonForm()
{
	try
	{
		Bureaucrat jonas("Jonas", PRES_EXEC_GRADE);
		PresidentialPardonForm form("president");
		jonas.signAForm(form);
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testPresidentialPardonFormSignTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", PRES_SIGN_GRADE + 1);
		PresidentialPardonForm form("president");
		jonas.signAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testPresidentialPardonFormExecuteTooLow()
{
	try
	{
		Bureaucrat jonas("Jonas", PRES_EXEC_GRADE + 1);
		PresidentialPardonForm form("president");
		jonas.signAForm(form);
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testPresidentialPardonFormNotSigned()
{
	try
	{
		Bureaucrat jonas("Jonas", PRES_EXEC_GRADE);
		PresidentialPardonForm form("president");
		jonas.executeAForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testPresidential()
{
	std::cout << "\n--Testing Presidential Creation Form Constructors--\n";
	testPresidentialPardonConstuctors();
	std::cout << "\n--Testing Presidential Creation Form--\n";
	testPresidentialPardonForm();
	std::cout << "\n--Testing Presidential Creation Form Sign Too Low--\n";
	testPresidentialPardonFormSignTooLow();
	std::cout << "\n--Testing Presidential Creation Form Exec Too Low--\n";
	testPresidentialPardonFormExecuteTooLow();
	std::cout << "\n--Testing Presidential Creation Form not signed--\n";
	testPresidentialPardonFormNotSigned();
}

int main()
{
	testShubbery();
	testRobotomy();
	testPresidential();
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
