/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   WrongCat.hpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 11:36:47 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 11:36:47 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <Color.hpp>
#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(const WrongCat &rhs);
	WrongCat &operator=(const WrongCat &rhs);
	~WrongCat();
	void makeSound() const;
};

#endif

/* ************************************************************************** */
