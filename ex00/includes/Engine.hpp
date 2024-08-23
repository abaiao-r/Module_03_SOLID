/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:46:31 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 20:00:10 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_HPP
# define ENGINE_HPP

#include <iostream>

class Engine
{
    private:
        bool isRunning;
        
    public:
        Engine();
        Engine(const Engine &src);
        ~Engine();
        Engine &operator=(const Engine &src);

        void start();
        void stop();
        const bool &isEngineRunning() const;
};

#endif
