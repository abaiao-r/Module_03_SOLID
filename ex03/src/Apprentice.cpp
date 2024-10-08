/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:01:20 by andrefranci       #+#    #+#             */
/*   Updated: 2024/09/23 20:19:25 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Apprentice.hpp"

Apprentice::Apprentice(int value)
	: Employee(value), hoursMissed(0), schoolHours(0)
{
}

Apprentice::Apprentice(const Apprentice &src)
	: Employee(src), hoursMissed(src.hoursMissed), schoolHours(src.schoolHours)
{
}

Apprentice::~Apprentice(void)
{
}

Apprentice &Apprentice::operator=(const Apprentice &src)
{
	if (this != &src)
	{
		Employee::operator=(src);
		this->hoursMissed = src.hoursMissed;
		this->schoolHours = src.schoolHours;
	}
	return (*this);
}

void Apprentice::registerAbsence(int hours)
{
	this->hoursMissed += hours;
}

void Apprentice::registerSchoolHours(int hours)
{
	this->schoolHours += hours;
}

int Apprentice::executeWorkDay(void)
{
	this->hoursWorked += 7;
	return (this->hoursWorked);
}

int Apprentice::calculateMonthlyPay(void) const
{
	// unitialized value?
	int workHours = (this->hoursWorked - this->hoursMissed - this->schoolHours);
	return ((workHours * this->hourlyValue)
			+ (this->schoolHours * this->hourlyValue / 2));
}
