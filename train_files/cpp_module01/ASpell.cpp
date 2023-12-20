#include"ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const & name, std::string const & effects):name(name), effects(effects){}

ASpell::ASpell(ASpell const & copy){
	*this = copy;
}

ASpell &ASpell::operator=(ASpell const & deep_copy){//ASpell::operator
	this->name = deep_copy.name;// . not ->
	this->effects = deep_copy.effects;// . not ->
	return(*this);
}

std::string const & ASpell::getName()const{
	return(this->name);
}

std::string const & ASpell::getEffects()const{
	return(this->effects);
}
ASpell::~ASpell() {}//ASpell::~ASpell() {}

void ASpell::launch(ATarget const & atarget_ref)const{
	atarget_ref.getHitBySpell(*this);
}
