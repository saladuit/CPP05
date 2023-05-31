/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Dog.hpp                                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:40:15 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:40:15 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
  public:
	Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
	~Dog();
	void makeSound() const;
	Brain *getBrain() const;
	void printIdeas() const;
	void setIdea(const std::string &idea);

  private:
	Brain *_brain;
};

#endif

/* ************************************************************************** */
