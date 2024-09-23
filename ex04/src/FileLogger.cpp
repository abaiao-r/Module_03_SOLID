/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:10:53 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:02:34 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FileLogger.hpp"

FileLogger::FileLogger(const std::string &filename) : outfile(filename)
{
	if (!outfile)
	{
		throw std::ios_base::failure("Cannot open file");
	}
}

FileLogger::~FileLogger()
{
	outfile.close();
}

void FileLogger::write(const std::string &message)
{
	outfile << message << std::endl;
}
