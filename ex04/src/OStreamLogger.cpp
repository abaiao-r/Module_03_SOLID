/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OStreamLogger.cpp                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:14:43 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/30 17:15:00 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/OStreamLogger.hpp"

OStreamLogger::OStreamLogger(std::ostream &os) : outStream(os)
{
}

void OStreamLogger::write(const std::string &message)
{
	outStream << message << std::endl;
}
