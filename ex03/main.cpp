/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:31:51 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:51:27 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main(void)
{
	Point const a(0.0f, 0.0f);
	Point const b(10.0f, 0.0f);
	Point const c(0.0f, 10.0f);

	Point const point1(0.0f, 0.0f);	 // Should return true
	Point const point2(5.0f, 5.0f);	 // Should return true
	Point const point3(5.0f, 6.0f);	 // Should return false
	Point const point4(11.0f, 0.0f); // Should return false
	Point const point5(0.0f, 11.0f); // Should return false
	Point const point6(-1.0f, 0.0f); // Should return false
	Point const point7(0.0f, -1.0f); // Should return false
	Point const point8(0.0f, 0.0f);	 // Should return true

	bool result1 = bsp(a, b, c, point1);
	bool result2 = bsp(a, b, c, point2);
	bool result3 = bsp(a, b, c, point3);
	bool result4 = bsp(a, b, c, point4);
	bool result5 = bsp(a, b, c, point5);
	bool result6 = bsp(a, b, c, point6);
	bool result7 = bsp(a, b, c, point7);
	bool result8 = bsp(a, b, c, point8);

	std::cout << "Point1: " << (result1 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point2: " << (result2 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point3: " << (result3 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point4: " << (result4 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point5: " << (result5 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point6: " << (result6 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point7: " << (result7 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;
	std::cout << "Point8: " << (result8 ? GREEN "inside" RESET : RED "outside" RESET) << std::endl;

	return (0);
}
