/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   WrongAnimal.hpp                                 |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 11:39:10 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 11:39:10 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <Color.hpp>
#include <iostream>
#include <ostream>
#include <string>

class WrongAnimal
{
  public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &rhs);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();
	void makeSound() const;
	virtual void setType(const std::string &type);
	virtual const std::string &getType() const;

  protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &animal);
#endif

/* ************************************************************************** */
