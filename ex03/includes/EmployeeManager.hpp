/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManager.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:23 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 17:22:29 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_MANAGEMENT_HPP
#define EMPLOYEE_MANAGEMENT_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "Employee.hpp"

class EmployeeManager
{
    private:
        std::vector<Employee *> employees;
        
    public:
        EmployeeManager(void);
        EmployeeManager(const EmployeeManager &src);
        ~EmployeeManager(void);

        EmployeeManager &operator=(const EmployeeManager &src);

        void addEmployee(Employee *employee);
        void removeEmployee(Employee *employee);
        void executeWorkday(void);
        void calculatePayroll(void) const;
};

#endif
