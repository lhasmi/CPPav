/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:49:54 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 18:53:10 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//  create an implementation of ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" and the effects to
// "fwooshed". You will, of course, implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a new Fwoosh object.

#include "Fwoosh.hpp"


Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(){}

ASpell *Fwoosh::clone()const{
	return(new Fwoosh());
}
