#include"Fwoosh.hpp"

Fwoosh::Fwoosh():ASpell("Fwoosh", "Fwooshed"){}

Fwoosh::~Fwoosh(){}

virtual ASpell *Fwoosh::clone()const{
	return(new Fwoosh());
}
