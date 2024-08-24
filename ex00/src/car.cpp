/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   car.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:36:52 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 18:04:27 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/car.hpp"

Car::Car() : engine(), transmission(), steering(), brakes(), speedController()
{
    std::cout << BLUE << "Car created" << RESET << std::endl;
}

Car::Car(const Car &src) : engine(src.engine), transmission(src.transmission), steering(src.steering), brakes(src.brakes), speedController(src.speedController)
{
    std::cout << BLUE << "Car created" << RESET << std::endl;
}

Car::~Car()
{
    std::cout << BOLDRED << "Car destroyed" << RESET << std::endl;
}

Car &Car::operator=(const Car &src)
{
    if (this != &src)
    {
        engine = src.engine;
        transmission = src.transmission;
        steering = src.steering;
        brakes = src.brakes;
        speedController = src.speedController;
    }
    return (*this);
}

void Car::start() {
    engine.start();
}

void Car::stop()
{
    engine.stop();
    speedController.changeSpeed(0);
    brakes.applyMaxForce();
}

void Car::accelerate(int speed)
{
    speedController.changeSpeed(speed);
}

void Car::shift_gears_up()
{
    transmission.shiftUp();
}

void Car::shift_gears_down()
{
    transmission.shiftDown();
}

void Car::reverse()
{
    transmission.reverse();
}

void Car::turn_wheel(int angle)
{
    steering.turn(angle);
}

void Car::straighten_wheels()
{
    steering.straighten();
}

void Car::apply_force_on_brakes(int force)
{
    brakes.applyForce(force);
}

void Car::apply_emergency_brakes()
{
    brakes.applyMaxForce();
}



