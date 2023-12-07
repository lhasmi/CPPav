/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:50:02 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 17:58:03 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std:string const & type): type(type){
}

ATarget::ATarget(ATarget const& copy){
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const& assignment)
{
	if(this == &assignment)
		return(*this);
	this->type = assignment.type;
	return(*this);
}

ATarget::~ATarget(){}

std::string const& ATarget::getType()const{
	return(this->type);
}

void ATarget::getHitBySpell(ASpell const& aspell_ref) const{
	std::cout << this->type << " has been "<< aspell_ref.getEffects()<<"!"<<endl;
}
