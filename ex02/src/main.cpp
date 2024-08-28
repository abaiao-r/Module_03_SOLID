/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:35:14 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/28 19:40:33 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/triangle.hpp"
#include "../includes/circle.hpp"
#include "../includes/rectangle.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    // Create instances of different shapes
    Rectangle rect(4.0, 5.0);
    Circle circ(3.0);
    Triangle tri(3.0, 4.0, 5.0, 2.0);

    // Store the shapes in a vector of pointers to Shape
    std::vector<Shape*> shapes = { &rect, &circ, &tri };

    // Iterate and display the area and perimeter of each shape
    for (const auto& shape : shapes)
    {
        std::cout << "Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << std::endl;
    }
}


