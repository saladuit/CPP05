/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Cat.hpp                                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:53:10 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:53:10 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
  public:
	Cat();
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);
	~Cat();
	void makeSound() const;
	void printIdeas() const;
	void setIdea(const std::string &idea);

  private:
	Brain *_brain;
};

#endif

/* ************************************************************************** */
