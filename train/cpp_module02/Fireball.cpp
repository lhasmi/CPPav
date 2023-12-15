/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:32:34 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 17:42:41 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
// Create the following two spells, on the same model as Fwoosh:

// * Fireball (Name: "Fireball", Effects: "burnt to a crisp")
// * Polymorph (Name: "Polymorph", Effects: "turned into a critter")

// In addition to this, just so he won't have only dummy to attack, let's make a
// new target for him, which will be the BrickWall (Type: "Inconspicuous Red-brick Wall").

Fireball::Fireball():ASpell("Fireball", "burnt to a crisp"){}


Fireball::~Fireball(){}

ASpell *Fireball::clone()const{
	return(new Fireball());
}
