/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   Brain.cpp                                       |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/31 13:30:31 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/31 13:30:31 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <algorithm>

/* **************************Orthodox_Canonical_Form************************* */

Brain::Brain() : _idea_count(0)
{
	std::cout << YEL << "Brain default constructor called" << NC << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	*this = rhs;
	std::cout << YEL << "Brain copy constructor called" << NC << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		this->_idea_count = rhs._idea_count;
		for (int i = 0; i < _idea_count; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	std::cout << YEL << "Brain assignation operator called" << NC << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << BRED << "Brain destructor called at " << this << NC
			  << std::endl;
}

/* **************************Public_member_functions************************* */

void Brain::setIdea(const std::string &idea)
{
	for (int i = BRAIN_SIZE - 1; i > 0; i--)
		_ideas[i] = _ideas[i - 1];
	_ideas[0] = idea;
	if (_idea_count < BRAIN_SIZE)
		_idea_count++;
}

std::string Brain::getIdea(int i) const
{
	return (_ideas[i]);
}

int Brain::getIdeaCount() const
{
	return (_idea_count);
}

std::ostream &operator<<(std::ostream &out, const Brain &brain)
{
	out << "Brain thinks: " << std::endl;
	for (int i = 0; i < brain.getIdeaCount(); i++)
		std::cout << brain.getIdea(i) << std::endl;
	return (out);
}

/* ************************************************************************** */
