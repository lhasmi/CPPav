/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  Spell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:19:24 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/02 18:59:28 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include<iostream>
#include<string>

class ASpell
{
	public:
		ASpell() const;
		ASpell(std::string const& name, std::string const& effects);
		ASpell(ASpell const& copy);
		ASpell &operator=(ASpell const& assignment)
		virtual ~ASpell();
		
		std::string const& getName()const;
		std::string const& getEffects()const;
		
		virtual ASpell *clone() const = 0;
		//add to your ASpell class a launch function that takes a reference to
//constant ATarget.
		void launch(ATarget const& atarget_ref) const;
	private:
		std::string name;
		std::string effects;
		

}
#endif
