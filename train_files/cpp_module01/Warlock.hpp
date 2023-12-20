#pragma once

#include<iostream>
#include<string>
#include<map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & otitle);
		void introduce() const;

		void learnSpell(ASpell * aspell_pt);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, ATarget const & atarget_ref);

	private:
		Warlock();
		Warlock(Warlock const & copy);
		Warlock & operator=(Warlock const & deep_copy);

		std::string name;
		std::string title;
		std::map<std::string, ASpell *>arr;
};
