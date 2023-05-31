/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   WrongAnimal.cpp                                 |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 11:40:02 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 11:40:02 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

/* **************************Public_member_functions************************* */

void WrongAnimal::setType(const std::string &type)
{
	_type = type;
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << BBLU << "The " << *this << " makes some noise" << NC
			  << std::endl;
}

/* **************************Orthodox_Canonical_Form************************* */

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GRN << *this << " called default constructor" << NC
			  << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs) : _type(rhs._type)
{
	std::cout << GRN << *this << " called Copy constructor" << NC << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		std::cout << GRN << *this << " called assignment operator" << NC
				  << std::endl;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BRED << "WrongAnimal destructor called by " << *this << " at "
			  << this << NC << std::endl;
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &animal)
{
	out << animal.getType();
	return (out);
}

/* ************************************************************************** */
