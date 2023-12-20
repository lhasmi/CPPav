/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:45:22 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 19:06:57 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>
class TargetGenerator:
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* atarget_ptr);
		void forgetTargetType(string const & atarget_ref);
		ATarget* createTarget(string const & newtarget_ref);
	private:
		std::map<std::string, ATarget *> arr_target;

		TargetGenerator(TargetGenerator const & copy);
		TargetGenerator &operator=(TargetGenerator const & deepcopy);
};
