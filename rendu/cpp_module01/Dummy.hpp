/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:10:37 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 18:35:25 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
//  create an implementation of ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" and the effects to
// "fwooshed". You will, of course, implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a new Fwoosh object.

// In the same way, create a concrete ATarget called Dummy, the type of which
// is "Target Practice Dummy". You must also implement its clone() method.
class Dummy: public ATarget
{
	public:
		Dummy();
		~Dummy();

		virtual ATarget *clone() const;//clones the class 
};
