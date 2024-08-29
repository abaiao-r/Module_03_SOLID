/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:12:01 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/29 17:34:48 by andrefranci      ###   ########.fr       */
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

    TempWorker* temp = new TempWorker(20);
    ContractEmployee* contract = new ContractEmployee(15);
    Apprentice* apprentice = new Apprentice(10);

    manager.addEmployee(temp);
    manager.addEmployee(contract);
    manager.addEmployee(apprentice);

    manager.executeWorkday();

    temp->mobilize(14);  // TempWorker works extra 14 hours
    contract->registerAbsence(7);  // ContractEmployee misses 7 hours
    apprentice->registerSchoolHours(10);  // Apprentice goes to school for 10 hours

    manager.calculatePayroll();

    manager.removeEmployee(temp);
    manager.removeEmployee(contract);
    manager.removeEmployee(apprentice);

    delete temp;
    delete contract;
    delete apprentice;

    return 0;
}
