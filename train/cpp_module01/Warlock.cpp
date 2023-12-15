
#include"Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string const & name, std::string const & title): name(name), title(title){
	std::cout<<this->name<<": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock(){
	std::cout<<this->name<<": My job here is done!"<<std::endl;
	std::map<std::string, ASpell *>::iterator it_begin = this->arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->arr.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->arr.clear();//erases everything 
}

std::string const & Warlock::getName() const{
	return(this->name);
}
std::string const & Warlock::getTitle() const{
	return(this->title);
}

void Warlock::setTitle(std::string const & other_title) const{
	this->title = other_title;
}
void Warlock::introduce() const{
	std::cout<<this->name<<": I am "<<this->name<<", "<<this->title<<"!"<<std::endl;
}

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
void Warlock::learnSpell(ASpell * aspell_pt){
	if(aspell_pt)
		this->arr_map.insert(
			std::pair<std::string, ASpell *>(aspell_pt->getName(), aspell_pt->clone()));//->clone()
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
void Warlock::forgetSpell(std::string spell_name){
	std::map<std::string, ASpell *>::iterator it = arr_map.find(spell_name);
	if(it != arr_map.end())
		delete it->second;
	arr_map.erase(spell_name);
}

// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.void launch(ATarget const & atarget_ref)const;
void Warlock::launchSpell(std::string &spell_name, ATarget const & atarget_ref)
{
	ASpell * aspell;
	aspell = arr_map[spell_name];
	if(aspell)
		aspell->launch(atarget_ref);
}
