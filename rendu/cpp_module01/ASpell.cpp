/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:17:43 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 17:57:43 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#innclude "ASpell.hpp"

ASpell::ASpell(){}


ASpell::ASpell(std::string const& name, std::string const& effects): name (name), effects(effects){
}

ASpell::ASpell(ASpell const& copy){
	*this = copy;
}

ASpell& ASpell::operator=(ASpell const& assignment)
{
	if (this == &assignment)
		return *this;
	std::string tempName = assignment.name;
	std::string tempEffects = assignment.effects;
	name = tempName;
	effects = tempEffects;
	return (*this);
}

ASpell:: ~ASpell();

std::string const& ASpell::getName()const
{
	return(this->name);
}

std::string const& ASpell::getEffects()const;
{
	return(this->effects);
}

void ASpell::launch(ATarget const& atarget_ref) const{
	atarget_ref.getHitBySpell((*this));
}
