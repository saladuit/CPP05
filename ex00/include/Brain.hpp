/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Brain.hpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 13:27:12 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 13:27:12 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define BRAIN_SIZE 100

#include <Color.hpp>
#include <iostream>
#include <ostream>
#include <string>

class Brain
{
  public:
	Brain();
	Brain(const Brain &rhs);
	Brain &operator=(const Brain &rhs);
	~Brain();

	void setIdea(const std::string &idea);
	std::string getIdea(int i) const;
	int getIdeaCount() const;

  private:
	std::string _ideas[BRAIN_SIZE];
	int _idea_count;
};

std::ostream &operator<<(std::ostream &out, const Brain &brain);

#endif

/* ************************************************************************** */
