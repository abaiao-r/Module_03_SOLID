/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:49:21 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 17:47:21 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEERING_HPP
# define STEERING_HPP

#include <iostream>

class Steering
{
    private:
        int wheelAngle;
        
    public:
        Steering(void);
        Steering(const Steering &src);
        ~Steering(void);
        Steering &operator=(const Steering &src);

        void turn(int angle);
        void straighten(void);
        const int &getWheelAngle(void) const;
};

#endif
