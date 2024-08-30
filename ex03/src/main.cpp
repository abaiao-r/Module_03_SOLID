/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:12:01 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/30 16:16:42 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/EmployeeManager.hpp"
#include "../includes/TempWorker.hpp"
#include "../includes/ContractEmployee.hpp"
#include "../includes/Apprentice.hpp"
#include <iostream>


int main(void)
{
    EmployeeManager manager;

    TempWorker* temp = new TempWorker(10);
    ContractEmployee* contract = new ContractEmployee(10);
    Apprentice* apprentice = new Apprentice(10);

    manager.addEmployee(temp);
    manager.addEmployee(contract);
    manager.addEmployee(apprentice);

    manager.executeWorkday(); // All employees work 7 hours

    temp->mobilize(10);  // TempWorker works extra 10 hours
    contract->registerAbsence(7);  // ContractEmployee misses 7 hours
    apprentice->registerSchoolHours(7);  // Apprentice goes to school for 7 hours

    manager.calculatePayroll();

    manager.removeEmployee(temp);
    manager.removeEmployee(contract);
    manager.removeEmployee(apprentice);

    return 0;
}
