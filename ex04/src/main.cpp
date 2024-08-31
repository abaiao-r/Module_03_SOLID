/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:35:14 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/31 02:32:46 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ILogger.hpp"
#include "../includes/FileLogger.hpp"
#include "../includes/OStreamLogger.hpp"
#include "../includes/HeaderLogger.hpp"
#include "../includes/DateHeaderLogger.hpp"

#include <vector>
#include <iostream>
#include <memory>

int main() {
    std::vector<std::unique_ptr<ILogger>> loggers;

    // Using std::unique_ptr with new instead of std::make_unique
    loggers.push_back(std::unique_ptr<ILogger>(new FileLogger("log.txt")));
    loggers.push_back(std::unique_ptr<ILogger>(new OStreamLogger(std::cout)));

    // Decorated loggers with headers
    loggers.push_back(std::unique_ptr<ILogger>(
        new HeaderLogger(std::unique_ptr<ILogger>(new FileLogger("log_with_header.txt")), "[Header] ")));
    loggers.push_back(std::unique_ptr<ILogger>(
        new DateHeaderLogger(std::unique_ptr<ILogger>(new OStreamLogger(std::cout)))));

    std::vector<std::string> messages = {"First log entry", "Second log entry", "Third log entry"};

    for (const auto& message : messages)
    {
        for (const auto& logger : loggers)
        {
            logger->write(message);
        }
    }

    return (0);
}
