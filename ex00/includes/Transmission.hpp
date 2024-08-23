/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:48:08 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 20:24:09 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSMISSION_HPP
# define TRANSMISSION_HPP

#include <iostream>

class Transmission
{
    private:
        int currentGear;
        bool isReverse;
        
    public:
        Transmission();
        Transmission(const Transmission &src);
        ~Transmission();
        Transmission &operator=(const Transmission &src);

        void shiftUp();
        void shiftDown();
        void reverse();
        const int &getGear() const;
        const bool &isReverseOn() const;
};

#endif
