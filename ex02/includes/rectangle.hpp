/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:15:51 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/28 19:13:28 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
	private:
		double _width;
		double _height;

	public:
		Rectangle(void);
		Rectangle(double width, double height);
		Rectangle(Rectangle const &src);
		virtual ~Rectangle(void);

		Rectangle &operator=(Rectangle const &src);

		double area(void) const override;
		double perimeter(void) const override;
};

#endif	// RECTANGLE_HPP
