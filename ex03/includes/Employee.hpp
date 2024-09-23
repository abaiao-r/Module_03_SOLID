/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:44:21 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/30 15:26:32 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
	protected:
		int hourlyValue;
		int hoursWorked;

	public:
		Employee(int hourlyValue);
		Employee(const Employee &src);
		virtual ~Employee(void);

		Employee &operator=(const Employee &src);

		virtual int executeWorkDay(void) = 0;
		virtual int calculateMonthlyPay(void) const = 0;
};

#endif
