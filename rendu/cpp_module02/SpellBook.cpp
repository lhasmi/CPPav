/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:06:20 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 18:06:51 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"SpellBook.hpp"
// in canonical form, that can't be copied or instantiated
// by copy. It will have the following functions:

// * void learnSpell(ASpell*), that COPIES a spell in the book
// * void forgetSpell(string const &), that deletes a spell from the book, except
//   if it isn't there
// * ASpell* createSpell(string const &), that receives a string corresponding to
//   the name of a spell, creates it, and returns it.
