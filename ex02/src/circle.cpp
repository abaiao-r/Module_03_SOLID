/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:16:28 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/28 19:17:19 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/circle.hpp"

Circle::Circle(void) : _radius(0)
{
}

Circle::Circle(double radius) : _radius(radius)
{
}

Circle::Circle(Circle const &src) : _radius(src._radius)
{
}

Circle::~Circle(void)
{
}

Circle &Circle::operator=(Circle const &src)
{
	if (this != &src)
	{
		_radius = src._radius;
	}
	return (*this);
}

double Circle::area(void) const
{
	return (M_PI * _radius * _radius);
}

double Circle::perimeter(void) const
{
	return (2 * M_PI * _radius);
}
