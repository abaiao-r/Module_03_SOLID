/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OStreamLogger.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:13:10 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:06:59 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSTREAMLOGGER_HPP
#define OSTREAMLOGGER_HPP

#include <ostream>
#include <string>

#include "ILogger.hpp"

class OStreamLogger : public ILogger
{
	private:
		std::ostream &outStream;

	public:
		OStreamLogger(std::ostream &os);
		void write(const std::string &message) override;
};

#endif
