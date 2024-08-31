/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HeaderLogger.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:12:45 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:27:12 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HeaderLogger.hpp"

HeaderLogger::HeaderLogger(std::unique_ptr<ILogger> loggerPtr, const std::string &headerText) : logger(std::move(loggerPtr)), header(headerText)
{
}

void HeaderLogger::write(const std::string &message)
{
    logger->write(header + message);
}



