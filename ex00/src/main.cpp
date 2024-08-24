/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:11:30 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 18:02:04 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/car.hpp"
#include "../includes/colours.hpp"

int main()
{
    Car car;

    car.start();
    car.accelerate(50);
    car.shift_gears_up();
    car.accelerate(100);
    car.shift_gears_up();
    car.accelerate(150);
    car.shift_gears_down();
    car.reverse();
    car.turn_wheel(90);
    car.straighten_wheels();
    car.apply_force_on_brakes(500);
    car.apply_emergency_brakes();
    car.stop();
    return (0);
}
