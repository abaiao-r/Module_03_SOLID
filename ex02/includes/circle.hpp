/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:16:16 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/28 19:44:30 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <cmath>  // M_PI

#include "shape.hpp"

class Circle : public Shape
{
	private:
		double _radius;

	public:
		Circle(void);
		Circle(double radius);
		Circle(Circle const &src);
		virtual ~Circle(void);

		Circle &operator=(Circle const &src);

		double area(void) const override;
		double perimeter(void) const override;
};

#endif	// CIRCLE_HPP
