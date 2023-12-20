/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:45:14 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/10 18:39:08 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		BrickWall();
		~BrickWall();

		virtual ATarget *clone()const;
}
