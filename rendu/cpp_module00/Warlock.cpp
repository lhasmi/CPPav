/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:13:40 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/30 18:13:34 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day."<< std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!"<< std::endl;
}

std::string const &Warlock::getName() const
{
	return(this->name);
}

std::string const &Warlock::getTitle() const
{
	return(this->title);
}
void Warlock::setTitle(std::string const &other){
	title = other;
}

void Warlock::introduce() const{
	std::cout << this->name << ": I am "<<  this->name <<", "<<  this->title << "!"<< std::endl;
}

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }
