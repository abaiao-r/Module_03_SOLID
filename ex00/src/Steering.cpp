/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:43:36 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 17:58:27 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Steering.hpp"

Steering::Steering(void)
{
	this->wheelAngle = 0;
}

Steering::Steering(const Steering &src)
{
	*this = src;
}

Steering::~Steering(void)
{
}

Steering &Steering::operator=(const Steering &src)
{
	if (this != &src)
	{
		this->wheelAngle = src.wheelAngle;
	}
	return (*this);
}

void Steering::turn(int angle)
{
	this->wheelAngle = angle;
	std::cout << "Turning wheel by " << getWheelAngle() << " degrees"
			  << std::endl;
}

void Steering::straighten(void)
{
	this->wheelAngle = 0;
	std::cout << "Straightening wheel" << std::endl;
}

const int &Steering::getWheelAngle(void) const
{
	return (this->wheelAngle);
}
