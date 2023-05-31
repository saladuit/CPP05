/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Cat.cpp                                         |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 09:54:01 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 09:54:01 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

/* **************************Orthodox_Canonical_Form************************* */

Cat::Cat() : _brain(new Brain())
{
	this->_type = "Cat";
	std::cout << YEL << *this << " default constructor called" << NC
			  << std::endl;
}

Cat::Cat(const Cat &rhs) : _brain(new Brain(*rhs._brain))
{
	this->_type = rhs._type;
	std::cout << YEL << *this << " copy constructor called" << NC << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	std::cout << YEL << *this << " assignation operator called" << NC
			  << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (_brain != nullptr)
	{
		delete _brain;
	}
	std::cout << BRED << "Cat destructor called by " << *this << " at " << this
			  << NC << std::endl;
}

/* **************************Public_member_functions************************* */

void Cat::makeSound() const
{
	std::cout << CYN << "The " << *this << " says: Meow!" << NC << std::endl;
}

void Cat::printIdeas() const
{
	std::cout << BLU << *this << *_brain << NC << std::endl;
}

void Cat::setIdea(const std::string &idea)
{
	_brain->setIdea(idea);
}

/* ************************************************************************** */
