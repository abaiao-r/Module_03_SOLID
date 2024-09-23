/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:51:04 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/30 15:33:58 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ContractEmployee.hpp"

ContractEmployee::ContractEmployee(int value) : Employee(value), hoursMissed(0)
{
}

ContractEmployee::ContractEmployee(const ContractEmployee &src)
	: Employee(src), hoursMissed(src.hoursMissed)
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
	this->hoursWorked += 7;
	return (this->hoursWorked);
}

int ContractEmployee::calculateMonthlyPay(void) const
{
	return ((this->hoursWorked - this->hoursMissed) * this->hourlyValue);
}
