/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManagement.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:23 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 15:55:32 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_MANAGEMENT_HPP
#define EMPLOYEE_MANAGEMENT_HPP

#include <iostream>
#include <vector>
#include "employee.hpp"

class EmployeeManagement
{
    private:
        std::vector<Employee *> employees;
        
    public:
        EmployeeManagement(void);
        EmployeeManagement(const EmployeeManagement &src);
        ~EmployeeManagement(void);

        EmployeeManagement &operator=(const EmployeeManagement &src);

        void addEmployee(Employee *employee);
        void removeEmployee(Employee *employee);
        void executeWorday(void);
        void calculatePayroll(void) const;
};

#endif
