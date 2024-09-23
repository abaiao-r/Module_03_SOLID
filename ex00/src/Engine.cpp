/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:58:01 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/23 20:02:31 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Engine.hpp"

Engine::Engine()
{
	this->isRunning = false;
}

Engine::Engine(const Engine &src)
{
	*this = src;
}

Engine::~Engine()
{
}

Engine &Engine::operator=(const Engine &src)
{
	if (this != &src)
	{
		this->isRunning = src.isRunning;
	}
	return (*this);
}

void Engine::start()
{
	if (!this->isRunning)
	{
		this->isRunning = true;
		std::cout << "Engine started" << std::endl;
	}
	else
	{
		std::cout << "Engine is already running" << std::endl;
	}
}

void Engine::stop()
{
	if (this->isRunning)
	{
		this->isRunning = false;
		std::cout << "Engine stopped" << std::endl;
	}
	else
	{
		std::cout << "Engine is already stopped" << std::endl;
	}
}

const bool &Engine::isEngineRunning() const
{
	return (this->isRunning);
}
