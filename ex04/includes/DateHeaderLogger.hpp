/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateHeaderLogger.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:13:55 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/31 02:24:45 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATEHEADERLOGGER_HPP
# define DATEHEADERLOGGER_HPP

# include "ILogger.hpp"
# include <string>
# include <memory>
# include <ctime>

class DateHeaderLogger : public ILogger
{
    private:
        std::unique_ptr<ILogger> logger;
        std::string getCurrentTime() const;
    
    public:
        DateHeaderLogger(std::unique_ptr<ILogger> loggerPtr);
        virtual void write(const std::string &message) override;
};

#endif
