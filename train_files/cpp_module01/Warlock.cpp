#include"Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title):name(name), title(title){
	std::cout<<this->name<<": This looks like another boring day."<<"\n";
}

Warlock::~Warlock(){
	std::cout<<this->name<<": My job here is done!"<<"\n";

	std::map<std::string, ASpell *>::iterator it_begin=this->arr.begin();
	std::map<std::string, ASpell *>::iterator it_end=this->arr.end();
	while(it_begin != it_end){
		delete(it_begin->second);
		++it_begin;
	}
	this->arr.clear();//this->
}

std::string const & Warlock::getName() const{
	return(this->name);
}

std::string const & Warlock::getTitle() const{
	return(this->title);
}

void Warlock::setTitle(std::string const & otitle){
	this->title = otitle;
}

void Warlock::introduce() const{
	std::cout<<this->name<<": I am "<<this->name<<", "<<this->title<<"!"<<"\n";
}

void Warlock::learnSpell(ASpell * aspell_pt){//learn is insert
	if(aspell_pt)
		arr.insert(std::pair<std::string, ASpell*>
			(aspell_pt->getName(), aspell_pt->clone()));//*>(..,aspt->clone())
}

void Warlock::forgetSpell(std::string spell_name){//forget is find then delete and erase
	std::map<std::string, ASpell *>::iterator it=arr.find(spell_name);
	if(it != arr.end())
		delete(it->second);
	arr.erase(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const & atarget_ref){
	ASpell *spell;
	spell = arr[spell_name];
	if(spell)
		spell->launch(atarget_ref);

}
