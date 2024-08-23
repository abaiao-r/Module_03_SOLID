/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:52:35 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 19:23:48 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

class Brakes
{
    private:
        int force;
        
    public:
        Brakes();
        Brakes(const Brakes &src);
        ~Brakes();
        Brakes &operator=(const Brakes &src);

        void applyForce(int force);
        void applyEmergencyBrake(void);
};

#endif
