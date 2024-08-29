/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:51:04 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 19:05:23 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ContractEmployee.hpp"

ContractEmployee::ContractEmployee(int value) : Employee(value), hoursMissed(0)
{
}

ContractEmployee::ContractEmployee(const ContractEmployee &src) : Employee(src), hoursMissed(src.hoursMissed)
{
}

ContractEmployee::~ContractEmployee(void)
{
}

ContractEmployee &ContractEmployee::operator=(const ContractEmployee &src)
{
    if (this != &src)
    {
        Employee::operator=(src);
        this->hoursMissed = src.hoursMissed;
    }
    return (*this);
}

void ContractEmployee::registerAbsence(int hours)
{
    this->hoursMissed += hours;
}

int ContractEmployee::executeWorkDay(void)
{
    return (7);
}

int ContractEmployee::calculateMonthlyPay(void) const
{
    return ((30 * 7 - this->hoursMissed) * this->hourlyValue);
}





