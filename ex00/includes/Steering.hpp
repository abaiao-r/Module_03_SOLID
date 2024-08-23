/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:49:21 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 19:24:56 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEERING_HPP
# define STEERING_HPP

class Steering
{
    private:
        int angle;
        
    public:
        Steering();
        Steering(const Steering &src);
        ~Steering();
        Steering &operator=(const Steering &src);

        void turnWheel(int angle);
        void straightenWheels();
};

#endif
