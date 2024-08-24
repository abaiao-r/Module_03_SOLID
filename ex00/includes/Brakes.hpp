/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:52:35 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 17:48:41 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

#include <iostream>

class Brakes
{
    private:
        int brakeForce;
        
    public:
        Brakes();
        Brakes(const Brakes &src);
        ~Brakes();
        Brakes &operator=(const Brakes &src);

        void applyForce(int force);
        void applyMaxForce();
        const int &getBrakeForce() const;
};

#endif
