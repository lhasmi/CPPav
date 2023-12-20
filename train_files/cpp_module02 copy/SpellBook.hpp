#pragma once

#include<iostream>
#include<map>

#include"ASpell.hpp"
// Now, make a SpellBook class, in canonical form, that can't be copied or instantiated
// by copy. It will have the following functions:

class SpellBook:
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell_pt);
		void forgetSpell(string const & spell_ref);
		ASpell* createSpell(string const & spell_name);

	private:
		std::map<std::string, ASpell *>arr;
		SpellBook (SpellBook const & copy);
		SpellBook & operator=(SpellBook const & deep_copy);
}
