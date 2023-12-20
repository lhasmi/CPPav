/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:19:24 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 16:59:09 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include<iostream>
#include<string>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string const& type);
		ATarget(ATarget const& copy);
		ATarget &operator=(ATarget const& assignment);
		virtual ~ATarget();

		std::string const& getType()const;

		void getHitBySpell(ASpell const& aspell_ref) const;
		virtual ATarget *clone() const = 0;
	private:
		std::string type;

};

#include "ASpell.hpp"

#endif
