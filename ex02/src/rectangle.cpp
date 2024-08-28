/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:08:41 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/28 19:10:11 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rectangle.hpp"

Rectangle::Rectangle(void) : _width(0), _height(0)
{
}

Rectangle::Rectangle(double width, double height) : _width(width), _height(height)
{
}

Rectangle::Rectangle(Rectangle const &src) : _width(src._width), _height(src._height)
{
}

Rectangle::~Rectangle(void)
{
}

Rectangle &Rectangle::operator=(Rectangle const &src)
{
    if (this != &src)
    {
        _width = src._width;
        _height = src._height;
    }
    return (*this);
}

double Rectangle::area(void) const
{
    return (this->_width * this->_height);
}

double Rectangle::perimeter(void) const
{
    return (2 * (this->_width + this->_height));
}

