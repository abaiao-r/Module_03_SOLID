/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:16:53 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/28 19:23:39 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/triangle.hpp"

Triangle::Triangle(void) : _side1(0), _side2(0), _side3(0), _height(0)
{
}

Triangle::Triangle(double side1, double side2, double side3, double height)
	: _side1(side1), _side2(side2), _side3(side3), _height(height)
{
}

Triangle::Triangle(Triangle const &src)
	: _side1(src._side1),
	  _side2(src._side2),
	  _side3(src._side3),
	  _height(src._height)
{
}

Triangle::~Triangle(void)
{
}

Triangle &Triangle::operator=(Triangle const &src)
{
	if (this != &src)
	{
		_side1 = src._side1;
		_side2 = src._side2;
		_side3 = src._side3;
		_height = src._height;
	}
	return (*this);
}

double Triangle::area(void) const
{
	return ((_side1 * _height) / 2);
}

double Triangle::perimeter(void) const
{
	return (_side1 + _side2 + _side3);
}
