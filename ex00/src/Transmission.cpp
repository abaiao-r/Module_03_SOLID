/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:04:51 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 18:00:09 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Transmission.hpp"

Transmission::Transmission()
{
    this->gears = {'R', 'N', '1', '2', '3', '4', '5'};
    this->currentGearIndex = 2;
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
        this->gears = src.gears;
        this->currentGearIndex = src.currentGearIndex;
    }
    return (*this);
}

void Transmission::shiftUp()
{
    if (getGear() == 'R')
    {
        currentGearIndex = 2;
        std::cout << "Gear shifted up to " << getGear() << std::endl;
    }
    else if (this->currentGearIndex < 6)
    {
        this->currentGearIndex++;
        std::cout << "Gear shifted up to " << getGear() << std::endl;
    }
    else
    {
        std::cout << "Gear is already at max" << std::endl;
    }
}

void Transmission::shiftDown()
{
    if (getGear() == 'R')
    {
        currentGearIndex = 2;
        std::cout << "Gear shifted down to " << getGear() << std::endl;
    }
    else if (this->currentGearIndex > 2)
    {
        this->currentGearIndex--;
        std::cout << "Gear shifted down to " << getGear() << std::endl;
    }
    else
    {
        std::cout << "Gear is already at min" << std::endl;
    }
}

void Transmission::reverse()
{
    if (getGear() == 'R')
    {
        std::cout << "Gear is already in reverse" << std::endl;
    }
    else
    {
        this->currentGearIndex = 0;
        std::cout << "Gear shifted to reverse" << std::endl;
    }
}

const char &Transmission::getGear() const
{
    return (this->gears[this->currentGearIndex]);
}

