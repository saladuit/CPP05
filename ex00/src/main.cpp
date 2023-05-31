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

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void testIdeas(void)
{
	std::cout << "\n---Creating objects with default constructor---\n";
	Dog dog1;
	Cat cat1;

	std::cout << "\n---Making sounds---\n";
	dog1.setIdea("I love my owner!");
	dog1.setIdea("He brings me food!");
	dog1.setIdea("He must be a god!");
	cat1.setIdea("My owner loves me!");
	cat1.setIdea("He brings me food!");
	cat1.setIdea("I must be a god!");
	cat1.printIdeas();
	dog1.printIdeas();
	std::cout << "\n---Deleting objects from the stack---\n";
}

void testAnimalArray(void)
{
	const Animal *animal[4];
	std::cout << "\n---Creating pointers to Animal objects---\n";

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		animal[i]->makeSound();
	}
	std::cout << "\n---Deleting objects from the heap---\n";
	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
	}
}

// Uncomment line to see that it is abstract
void testAbstract(void)
{
	// Animal test;
}

int main(void)
{
	std::cout << "\n---Testing ideas---\n";
	testIdeas();
	std::cout << "\n---Testing animal array---\n";
	testAnimalArray();
	std::cout << "\n---Testing whether Animal is Actually abstract---\n";
	testAbstract();
	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
