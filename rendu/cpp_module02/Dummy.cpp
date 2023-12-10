/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:24:01 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 18:36:02 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

//  create an implementation of ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" and the effects to
// "fwooshed". You will, of course, implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a new Fwoosh object.

// In the same way, create a concrete ATarget called Dummy, the type of which
// is "Target Practice Dummy". You must also implement its clone() method.
// class Dummy: public ATarget
// {
// 	public:
// 		Dummy();
// 		~Dummy();

// 		virtual ATarget *clone() const;
// }

Dummy::Dummy(): ATarget("Target Practice Dummy"){}
Dummy::~Dummy() {}

ATarget *Dummy::clone() const
{
	return(new Dummy());
}
