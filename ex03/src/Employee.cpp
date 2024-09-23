/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:45:58 by andrefranci       #+#    #+#             */
/*   Updated: 2024/09/23 20:20:05 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Employee.hpp"

Employee::Employee(int value) : hourlyValue(value), hoursWorked(0)
{
}

Employee::Employee(const Employee &src) : hourlyValue(src.hourlyValue)
{
}

Employee::~Employee(void)
{
}

Employee &Employee::operator=(const Employee &src)
{
	if (this != &src)
	{
		this->hourlyValue = src.hourlyValue;
	}
	return (*this);
}
