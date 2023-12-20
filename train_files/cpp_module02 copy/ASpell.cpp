#include"ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell(std::string const & name, std::string const & effects):name(name), effects(effects){}

ASpell::ASpell(ASpell const & copy){
	*this = copy;//I construct an instance and make a copy of it
}

ASpell & ASpell::operator=(ASpell const & assignment_copy){
	this->name = assignment_copy.name;
	this->effects = assignment_copy.effects;
	return(*this);
}

ASpell::~ASpell(){}

std::string const & ASpell::getName()const{
	return(this->name);
}
std::string const & ASpell::getEffects()const{
	return(this->effects);
}

void ASpell::launch(ATarget const & atarget_ref)const{
	atarget_ref.getHitBySpell(*this);
}
