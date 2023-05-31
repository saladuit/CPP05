/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   WrongCat.cpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 11:35:12 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 11:35:12 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

/* **************************Orthodox_Canonical_Form************************* */

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << YEL << *this << " default constructor called" << NC
			  << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	*this = rhs;
	std::cout << YEL << *this << " copy constructor called" << NC << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	std::cout << YEL << *this << " assignation operator called" << NC
			  << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << BRED << "WrongCat destructor called by " << *this << " at "
			  << this << NC << std::endl;
}

/* **************************Public_member_functions************************* */

void WrongCat::makeSound() const
{
	std::cout << CYN << "The " << *this << " says: Meow!" << NC << std::endl;
}

/* ************************************************************************** */
