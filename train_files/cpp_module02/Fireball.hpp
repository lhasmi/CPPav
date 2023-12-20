/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:32:37 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 18:39:00 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

// Create the following two spells, on the same model as Fwoosh:

// * Fireball (Name: "Fireball", Effects: "burnt to a crisp")
// * Polymorph (Name: "Polymorph", Effects: "turned into a critter")

// In addition to this, just so he won't have only dummy to attack, let's make a
// new target for him, which will be the BrickWall (Type: "Inconspicuous Red-brick Wall").

class Fireball : public ASpell{
	public:
		Fireball();
		~Fireball();

		virtual ASpell *clone()const;
}
