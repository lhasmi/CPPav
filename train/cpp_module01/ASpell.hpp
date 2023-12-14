#pragma once

#include<iostream>

class ATarget;
class ASpell
{
	public:
		ASpell();
		ASpell(std::string & name, std::string & effects);//&
		ASpell(ASpell const & copy);
		ASpell & operator=(ASpell const & assignment_copy);
		virtual ~ASPELL();//virtual

		std::string const & getName()const;
		std::string const & getEffects()const;
		virtual ASpell * clone()const = 0;

		void launch(ATarget const & atarget_ref)const;
	private:
		std::string name;
		std::string effects;

};
#include"ATarget.hpp"
