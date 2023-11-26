/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:02:58 by lhasmi            #+#    #+#             */
/*   Updated: 2023/11/26 13:17:29 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//creating a function that swaps two integers using references in C++:

// 1. **Function Declaration**
//     - Create a function named `swapIntegers`.
//     - The function should take two parameters, both of which are references to integers (e.g., `int& a, int& b`).
// 2. **Function Definition**
//     - Inside the function, you'll need to implement the logic to swap the values of the two integers.
//     - A typical approach is to use a temporary variable to hold one of the values during the swap.
void swapIntegers(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}



// 3. **Main Function**
//     - In your `main()` function, declare two integer variables.
//     - Call the `swapIntegers` function with these variables.
int main()
{
	int a = 1;
	int b = 2;
	std::cout << "before swap\na: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	swapIntegers(a, b);
	std::cout << "after swap\na: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	return 0;
}
