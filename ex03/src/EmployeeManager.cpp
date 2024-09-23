/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManager.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:19:56 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 17:28:21 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/EmployeeManager.hpp"

EmployeeManager::EmployeeManager(void)
{
}

EmployeeManager::EmployeeManager(const EmployeeManager &src)
{
	for (size_t i = 0; i < src.employees.size(); i++)
	{
		this->employees.push_back(src.employees[i]);
	}
}

EmployeeManager::~EmployeeManager(void)
{
	for (size_t i = 0; i < this->employees.size(); i++)
	{
		delete this->employees[i];
	}
}

EmployeeManager &EmployeeManager::operator=(const EmployeeManager &src)
{
	if (this != &src)
	{
		for (size_t i = 0; i < this->employees.size(); i++)
		{
			delete this->employees[i];
		}
		this->employees.clear();
		for (size_t i = 0; i < src.employees.size(); i++)
		{
			this->employees.push_back(src.employees[i]);
		}
	}
	return (*this);
}

void EmployeeManager::addEmployee(Employee *employee)
{
	this->employees.push_back(employee);
}

void EmployeeManager::removeEmployee(Employee *employee)
{
	employees.erase(std::remove(employees.begin(), employees.end(), employee),
					employees.end());
}

void EmployeeManager::executeWorkday(void)
{
	for (size_t i = 0; i < this->employees.size(); i++)
	{
		this->employees[i]->executeWorkDay();
	}
}

void EmployeeManager::calculatePayroll(void) const
{
	for (const Employee *employee : this->employees)
	{
		std::cout << "Monthly pay: " << employee->calculateMonthlyPay()
				  << std::endl;
	}
}
