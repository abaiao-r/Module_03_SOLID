/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpeedController.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:50:37 by andrefranci       #+#    #+#             */
/*   Updated: 2024/09/24 00:09:19 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPEEDCONTROLLER_HPP
#define SPEEDCONTROLLER_HPP

#include <iostream>

class SpeedController
{
	private:
		int currentSpeed;

	public:
		SpeedController();
		SpeedController(const SpeedController &src);
		~SpeedController();
		SpeedController &operator=(const SpeedController &src);

		void	   changeSpeed(int speed);
		const int &getSpeed() const;
};

#endif
