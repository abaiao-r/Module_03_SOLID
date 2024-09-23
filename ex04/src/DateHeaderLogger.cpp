/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateHeaderLogger.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:16:13 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:25:07 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DateHeaderLogger.hpp"

DateHeaderLogger::DateHeaderLogger(std::unique_ptr<ILogger> loggerPtr)
	: logger(std::move(loggerPtr))
{
}

void DateHeaderLogger::write(const std::string &message)
{
	logger->write(getCurrentTime() + message);
}

std::string DateHeaderLogger::getCurrentTime() const
{
	std::time_t now = std::time(nullptr);
	std::string timeStr = std::ctime(&now);
	timeStr.pop_back();	 // remove newline
	return ("[" + timeStr + "] ");
}
