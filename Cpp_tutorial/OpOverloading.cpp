/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpOverloading.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:18:33 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/26 14:13:40 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Exercise: Overload the + operator for a simple Vector class that adds two vectors.
// 1. **Class Declaration**
//     - Create a class named `Vector`.
//     - The class should have two private member variables, both of which are integers.
//     - The class should have a constructor that takes two integers as parameters.
//     - The constructor should initialize the member variables with the parameter values.
//     - The class should have a member function named `print` that prints the member variables in the format `<x, y>`.
class Vector
{
private:
	int x;
	int y;
public:

	Vector(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void print()
	{
		std::cout << "<" << this->x << ", " << this->y << ">" << std::endl;
	}

// 2. **Operator Overloading**
//     - Overload the `+` operator so that it adds two `Vector` objects together.
//     - The `+` operator should return a new `Vector` object.
//     - The `+` operator should not modify the existing `Vector` objects.
	Vector operator+(const Vector& other)
	{
		Vector result(this->x + other.x, this->y + other.y);
		return result;
	}
};

// 3. **Main Function**
//     - In your `main()` function, create two `Vector` objects.
//     - Add the two `Vector` objects together using the `+` operator.
//     - Print the result.
int main()
{
	Vector v1(1, 2);
	Vector v2(3, 4);
	Vector v3 = v1 + v2;
	v3.print();
	return 0;
}

// 4. **Output**
//     - The output should look like this:
//     ```
//     <4, 6>
//     ```

// 5. **Bonus**
//     - Overload the `<<` operator so that it prints a `Vector` object in the same format as the `print` function.
//     - The `<<` operator should return an `ostream` object.
//     - The `<<` operator should not modify the existing `Vector` object.
//     - Print the result of adding the two `Vector` objects using the `+` operator using the `<<` operator.
//     - The output should look like this:
//     ```
//     <4, 6>
//     ```

// 6. **Bonus**
//     - Overload the `+=` operator so that it adds a `Vector` object to the current `Vector` object.
//     - The `+=` operator should return a reference to the current `Vector` object.

// 7. **Bonus**
//     - Overload the `-` operator so that it subtracts two `Vector` objects.
//     - The `-` operator should return a new `Vector` object.
//     - The `-` operator should not modify the existing `Vector` objects.

// 8. **Bonus**
//     - Overload the `-=` operator so that it subtracts a `Vector` object from the current `Vector` object.


