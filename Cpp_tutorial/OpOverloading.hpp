/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpOverloading.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:12:02 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/28 21:12:07 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Vector
{
	private:
		int x;
		int y;
	public:

		Vector(int x, int y);
		
		Vector(const Vector& other);
		Vector& operator=(const Vector& other);
		void print();
		Vector operator+(const Vector& other);
};

