/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:06:40 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/07 18:49:29 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
//  create an implementation of ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" and the effects to
// "fwooshed". You will, of course, implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a new Fwoosh object.

#include "ASpell.hpp"

class Fwoosh: public ASpell{
	public:
		Fwoosh();
		~Fwoosh();

	virtual ASpell *clone()const;
};
