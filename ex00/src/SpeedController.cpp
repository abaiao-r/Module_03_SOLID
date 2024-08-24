/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpeedController.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:51:40 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 17:54:03 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SpeedController.hpp"

SpeedController::SpeedController()
{
    this->currentSpeed = 0;
}

SpeedController::SpeedController(const SpeedController &src)
{
    *this = src;
}

SpeedController::~SpeedController()
{
}

SpeedController &SpeedController::operator=(const SpeedController &src)
{
    if (this != &src)
    {
        this->currentSpeed = src.currentSpeed;
    }
    return (*this);
}

void SpeedController::changeSpeed(int speed)
{
    if (speed != getSpeed())
    {
        this->currentSpeed = speed;
        std::cout << "Speed changed to " << getSpeed() << " km/h" << std::endl;
    }
    else
    {
        std::cout << "Speed is already at " << getSpeed() << " km/h" << std::endl;
    }
}

const int &SpeedController::getSpeed() const
{
    return (this->currentSpeed);
}
