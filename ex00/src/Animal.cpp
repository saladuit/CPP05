/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Animal.cpp                                      |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:14:17 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:14:17 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

/* **************************Public_member_functions************************* */

void Animal::setType(const std::string &type)
{
	_type = type;
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
}

/* **************************Orthodox_Canonical_Form************************* */

Animal::Animal() : _type("Animal")
{
	std::cout << GRN << *this << " called default constructor" << NC
			  << std::endl;
}

Animal::Animal(const Animal &rhs) : _type(rhs._type)
{
	std::cout << GRN << *this << " called Copy constructor" << NC << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		std::cout << GRN << *this << " called assignment operator" << NC
				  << std::endl;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << BRED << "Animal destructor called by " << *this << " at "
			  << this << NC << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Animal &animal)
{
	out << animal.getType();
	return (out);
}

/* ************************************************************************** */
