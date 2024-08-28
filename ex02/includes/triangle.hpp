/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:18:35 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/28 19:40:47 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

class Triangle : public Shape
{
    private:
        double _side1;
        double _side2;
        double _side3;
        double _height;
        
    public:
        Triangle(void);
        Triangle(double side1, double side2, double side3, double height);
        Triangle(Triangle const &src);
        virtual ~Triangle(void);

        Triangle &operator=(Triangle const &src);

        double area(void) const override;
        double perimeter(void) const override;
};

#endif // TRIANGLE_HPP
