/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:15:14 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/28 19:35:54 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

class Shape
{
	public:
		virtual ~Shape(void);

		virtual double area(void) const = 0;
		virtual double perimeter(void) const = 0;
};

#endif	// SHAPE_HPP
