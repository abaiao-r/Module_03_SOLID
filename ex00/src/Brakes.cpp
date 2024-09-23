/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:49:01 by andrefranci       #+#    #+#             */
/*   Updated: 2024/09/24 00:13:13 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brakes.hpp"

Brakes::Brakes()
{
	this->brakeForce = 0;
}

Brakes::Brakes(const Brakes &src)
{
	*this = src;
}

Brakes::~Brakes()
{
}

Brakes &Brakes::operator=(const Brakes &src)
{
	if (this != &src)
	{
		this->brakeForce = src.brakeForce;
	}
	return (*this);
}

void Brakes::applyForce(int force)
{
	this->brakeForce = force;
	std::cout << "Applying " << getBrakeForce() << "N of force to the brakes"
			  << std::endl;
}

void Brakes::applyMaxForce()
{
	this->brakeForce = 1000;
	std::cout << "Applying max force to the brakes" << std::endl;
}

const int &Brakes::getBrakeForce() const
{
	return (this->brakeForce);
}
