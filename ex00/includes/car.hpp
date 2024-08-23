/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   car.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:44:08 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 19:50:39 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAR_HPP
# define CAR_HPP

# include <iostream>
# include "colours.hpp"
# include "Engine.hpp"
# include "Transmission.hpp"
# include "Steering.hpp"
# include "Brakes.hpp"
# include "SpeedController.hpp"



class Car
{
    private:
        Engine engine;
        Transmission transmission;
        Steering steering;
        Brakes brakes;
        SpeedController speedController;
        
    public:
        Car();
        Car(const Car &src);
        ~Car();
        Car &operator=(const Car &src);

        void start();
        void stop();
        void accelerate(int speed);
        void shift_gears_up();
        void shift_gears_down();
        void reverse();
        void turn_wheel(int angle);
        void straighten_wheels();
        void apply_force_on_brakes(int force);
        void apply_emergency_brakes();
};

# endif