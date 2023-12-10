/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:52:05 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 19:07:11 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>

class SpellBook :
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* aspell_ptr);
		void forgetSpell(std::string const & name);
		ASpell* createSpell(std::string const & name);

	private:
		std::map<std::string, ASpell *> arr_spell:

		SpellBook(SpellBook const & copy);
		SpellBook & operator=(SpellBook const & deepcopy);
};
