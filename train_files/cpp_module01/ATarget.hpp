#pragma once

#include<iostream>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string const & type);

		virtual ~ATarget();//virtual

		ATarget(ATarget const & copy);
		ATarget &operator=(ATarget const & deep_copy);

		std::string const & getType()const;//const &

		virtual ATarget *clone()const = 0;

		void getHitBySpell(ASpell const & aspell_ref)const;//const
	private:
		std::string type;
};
#include"ASpell.hpp"
