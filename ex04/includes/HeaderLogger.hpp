/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HeaderLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:57:44 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:27:42 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERLOGGER_HPP
#define HEADERLOGGER_HPP

#include <ctime>
#include <memory>
#include <string>

#include "ILogger.hpp"

class HeaderLogger : public ILogger
{
	protected:
		std::unique_ptr<ILogger> logger;
		std::string				 header;

	public:
		HeaderLogger(std::unique_ptr<ILogger> loggerPtr,
					 const std::string	   &headerText);
		virtual void write(const std::string &message) override;
};

#endif
