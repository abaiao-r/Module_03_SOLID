/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpeedController.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:50:37 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 19:24:42 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPEEDCONTROLLER_HPP
# define SPEEDCONTROLLER_HPP

class SpeedController
{
    private:
        int speed;
        
    public:
        SpeedController();
        SpeedController(const SpeedController &src);
        ~SpeedController();
        SpeedController &operator=(const SpeedController &src);

        void accelerate(int speed);
};

#endif
