#include"ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(std::string & type):type(type){}

ATarget::ATarget(ATarget const & copy){
	*this = copy;//I construct an instance and make a copy of it
}

ATarget & ATarget::operator=(ATarget const & assignment_copy){
	this->type = assignment_copy.type;
	return(*this);
}

ATarget::~ATarget(){}

std::string const & ATarget::getType()const{
	return(this->type);
}

void ATarget::getHitByTarget(ASpell const & aspell_ref) const{
	std::cout<<this->type<<" has been "<<aspell_ref.getEffects()<<"!"<<std::endl;
}
