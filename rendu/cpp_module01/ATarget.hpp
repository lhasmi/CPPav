/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:19:24 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/02 19:05:21 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include<iostream>
#include<string>

class ATarget
{
	public:
		ATarget() const;
		ATarget(std::string const& type);
		ATarget(ATarget const& copy);
		ATarget &operator=(ATarget const& assignment)
		virtual ~ATarget();
		
		std::string const& getType()const;
		
		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const& aspell_ref) const;
	private:
		std::string type;		

}
#endif
