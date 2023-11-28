/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpOverloading.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:18:33 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/28 21:15:32 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpOverloading.hpp"
// Vector(int x, int y);

// Vector(const Vector& other);
// Vector& operator=(const Vector& other);
// void print();
// Vector operator+(const Vector& other);

Vector::Vector(int x, int y): x(x), y(y)
{
	std::cout << "Constructor called" << std::endl;
}


Vector::Vector(const Vector& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Vector& Vector::operator=(const Vector& other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->x = other.x;
	this->y = other.y;
	return *this;
}

void Vector::print()
{
	std::cout << "<" << this->x << ", " << this->y << ">" << std::endl;
}

Vector Vector::operator+(const Vector& other)
{
	std::cout << "Addition operator called" << std::endl;
	return (Vector(this->x + other.x, this->y + other.y));
}

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


