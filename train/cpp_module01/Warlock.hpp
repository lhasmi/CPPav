#pragma once

#include<iostream>
#include<string>
// Add to the Warlock the following member functions:

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.

// You will need a new attribute to store the spells your Warlock knows. Several
// types fit the bill, it's up to you to choose the best one.

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);//const &
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void setTitle(std::string const & other_title);
		void introduce() const;

	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const & copy);
		Warlock &operator=(Warlock const & deep_copy);
};
