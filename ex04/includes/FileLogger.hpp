/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:04:31 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 01:57:58 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include <fstream>
#include <string>

#include "ILogger.hpp"

class FileLogger : public ILogger
{
	private:
		std::ofstream outfile;

	public:
		FileLogger(const std::string &filename);
		virtual ~FileLogger() override;

		void write(const std::string &message) override;
};

#endif
