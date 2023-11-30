/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:19:24 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/30 19:27:40 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include<iostream>
#include<string>

class ASpell
{
	public:
		Aspell(std::string const& name, std::string const& effects);
		˜Aspell();
		std::string const& getName()const;
		std::string const& getEffects()const;

}
#endif
