#include"ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const & type):type(type){}

ATarget::~ATarget(){}

ATarget::ATarget(ATarget const & copy){
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const & deep_copy){
	this->type=deep_copy.type;
	return(*this);
}

std::string const & ATarget::getType()const{
	return(this->type);
}

void ATarget::getHitBySpell(ASpell const & aspell_ref)const{
	std::cout<<this->type<<" has been "<<aspell_ref.getEffects()<<"!\n";
}
