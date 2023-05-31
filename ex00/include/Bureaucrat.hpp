/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Animal.hpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 08:57:00 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 08:57:00 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <Brain.hpp>
#include <Color.hpp>
#include <iostream>
#include <ostream>
#include <string>

class Animal
{
  public:
	Animal();
	Animal(const Animal &rhs);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	virtual void setType(const std::string &type);
	virtual const std::string &getType() const;

  protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);
#endif

/* ************************************************************************** */
