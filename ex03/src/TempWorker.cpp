/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempWorker.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:49:44 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 16:04:33 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/TempWorker.hpp"

TempWorker::TempWorker(int hourlyValue) : Employee(hourlyValue), hoursWorked(0)
{
}

TempWorker::TempWorker(const TempWorker &src) : Employee(src), hoursWorked(src.hoursWorked)
{
}

TempWorker::~TempWorker(void)
{
}

TempWorker &TempWorker::operator=(const TempWorker &src)
{
    if (this != &src)
    {
        Employee::operator=(src);
        this->hoursWorked = src.hoursWorked;
    }
    return (*this);
}

void TempWorker::mobilize(int hours)
{
    this->hoursWorked += hours;
}

int TempWorker::executeWorkDay(void)
{
    this
}

int TempWorker::calculateMonthlyPay(void) const
{
    return (this->hoursWorked * this->hourlyValue);
}




