#pragma once

#include<iostream>

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string const & name, std::string const & effects);
		virtual ~ASpell();//virtual
		ASpell(ASpell const & copy);
		ASpell &operator=(ASpell const & deep_copy);

		std::string const & getName()const;//const &
		std::string const & getEffects()const;//const &

		virtual ASpell *clone()const = 0;

		void launch(ATarget const & atarget_ref)const;//const
	private:
		std::string name;
		std::string effects;
};
#include"ATarget.hpp"
