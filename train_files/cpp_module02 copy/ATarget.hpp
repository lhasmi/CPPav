#pragma once

#include<iostream>

class ASpell;
class ATarget
{
	public:
		ATarget();
		ATarget(std::string const & type);
		ATarget(ATarget const & copy);
		ATarget & operator=(ATarget const & assignment_copy);
		virtual ~ATarget();

		std::string const & getName()const;
		std::string const & getType()const;
		void getHitBySpell(ASpell const & aspell_ref) const;

		virtual ATarget * clone()const = 0;
	private:
		std::string type;

};
#include"ASpell.hpp"
