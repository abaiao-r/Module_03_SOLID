/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:45:58 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 15:56:24 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Employee.hpp"

Employee::Employee(int hourlyValue) : hourlyValue(hourlyValue)
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
