#pragma once

#include<iostream>

class ASpell;
class ATarget
{
	public:
		ATarget();
		ATarget(std::string & type);
		ATarget(ATarget const & copy);
		ATarget & operator=(ATarget const & assignment assignement_copy);
		virtual ~ATarget();

		std::string const & getName()const;
		std::string const & getEffects()const;
		virtual ATarget * clone()const = 0;
		void getHitBySpell(ASpell const & aspell_ref) const;

	private:
		std::string type;

};
#include"ASpell.hpp"
