/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:44:21 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 15:55:17 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
    protected:
        int hourlyValue;

    public:
        Employee(int hourlyValue);
        Employee(const Employee &src);
        virtual ~Employee(void);

        Employee &operator=(const Employee &src);

        virtual int executeWorkDay(void) = 0;
        virtual void calculateMonthlyPay(void) const = 0;
};

#endif
