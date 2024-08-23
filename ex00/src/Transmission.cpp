/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:04:51 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 20:24:49 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Transmission.hpp"

Transmission::Transmission()
{
    this->currentGear = 1;
    this->isReverse = false;
}

Transmission::Transmission(const Transmission &src)
{
    *this = src;
}

Transmission::~Transmission()
{
}

Transmission &Transmission::operator=(const Transmission &src)
{
    if (this != &src)
    {
        this->currentGear = src.currentGear;
        this->isReverse = src.isReverse;
    }
    return (*this);
}

void Transmission::shiftUp()
{
    if (this->currentGear < 5)
    {
        this->currentGear++;
        std::cout << "Gear shifted up to " << this->currentGear << std::endl;
    }
    else
    {
        std::cout << "Gear is already at max" << std::endl;
    }
}

void Transmission::shiftDown()
{
    if (this->currentGear > 1)
    {
        //if reverse is on, reverse is turned off
        if (this->isReverse)
        {
            this->isReverse = false;
            std::cout << "Reverse gear disengaged" << std::endl;
        }
        this->currentGear--;
        std::cout << "Gear shifted down to " << this->currentGear << std::endl;
    }
    else
    {
        std::cout << "Gear is already at min" << std::endl;
    }
}

void Transmission::reverse()
{
    if (this->isReverse)
    {
        this->isReverse = false;
        std::cout << "Reverse gear disengaged" << std::endl;
    }
    else
    {
        this->isReverse = true;
        std::cout << "Reverse gear engaged" << std::endl;
        //current gear is set to 1 when reverse is engaged
    }
}



