/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:14:04 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 18:50:30 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
// Modify the Warlock, now, make it have a spell book that will be created with
// him and destroyed with him. Also make his learnSpell and forgetSpell functions
// call those of the spell book.

// The launchSpell function will have to use the SpellBook to create the spell
// it's attempting to launch.
Warlock::Warlock(std::string const & name, std::string const & title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day."<< std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!"<< std::endl;
	std::map<std::string, ASpell *>::iterator it_begin = this->arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->arr.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->arr.clear();
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

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
void Warlock::learnSpell(ASpell *aspell_pt){
	if(aspell_pt)
		arr.insert(std::pair<std::string, ASpell *>(aspell_pt->getName(), aspell_pt->clone()));
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
void Warlock::forgetSpell(std::string spell_name){
	std::map<std::string, ASpell*>::iterator it = arr.find(spell_name);
	if(it != arr.end())
		delete it->second;
	arr.erase(spell_name);
}

// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
void Warlock::launchSpell(std::string  spell_name, ATarget const & atarget_ref){
	ASpell * spell = arr[spell_name];
	if(spell)
		spell->launch(atarget_ref);
}








// Below is a possible test main and its expected output:

// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }

// ~$ ./a.out | cat -e
// Richard: This looks like another boring day.$
// Richard: I am Richard, the Titled!$
// Target Practice Dummy has been fwooshed!$
// Richard: My job here is done!$
