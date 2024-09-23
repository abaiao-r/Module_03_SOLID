/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:48:08 by andrefranci       #+#    #+#             */
/*   Updated: 2024/09/24 00:10:26 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <array>
#include <iostream>

class Transmission
{
	private:
		std::array<char, 7> gears;
		int					currentGearIndex;

	public:
		Transmission();
		Transmission(const Transmission &src);
		~Transmission();
		Transmission &operator=(const Transmission &src);

		void		shiftUp();
		void		shiftDown();
		void		reverse();
		const char &getGear() const;
};

#endif
