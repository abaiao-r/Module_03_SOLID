/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:48:08 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/24 18:00:16 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSMISSION_HPP
# define TRANSMISSION_HPP

#include <iostream>
#include <array>

class Transmission
{
    private:
        std::array<char, 7> gears;
        int currentGearIndex;
        
    public:
        Transmission();
        Transmission(const Transmission &src);
        ~Transmission();
        Transmission &operator=(const Transmission &src);

        void shiftUp();
        void shiftDown();
        void reverse();
        const char &getGear() const;
};

#endif
