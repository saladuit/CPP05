/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Dog.cpp                                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:40:55 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:40:55 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

/* **************************Orthodox_Canonical_Form************************* */

Dog::Dog() : _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << MAG << *this << " default constructor called" << NC
			  << std::endl;
}

Dog::Dog(const Dog &rhs) : _brain(new Brain(*rhs._brain))
{
	this->_type = rhs._type;
	std::cout << MAG << *this << " copy constructor called" << NC << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	std::cout << MAG << *this << " assignation operator called" << NC
			  << std::endl;
	return (*this);
}

Dog::~Dog()
{
	if (_brain != nullptr)
	{
		delete _brain;
	}
	std::cout << BRED << "Dog destructor called by " << *this << " at " << this
			  << NC << std::endl;
}

/* **************************Public_member_functions************************* */

void Dog::makeSound() const
{
	std::cout << CYN << "The " << *this << " says: Woof Woof!" << NC
			  << std::endl;
}

void Dog::printIdeas() const
{
	std::cout << BLU << *this << *_brain << NC << std::endl;
}

void Dog::setIdea(const std::string &idea)
{
	_brain->setIdea(idea);
}

/* ************************************************************************** */
