











#ifndef COLOURS_HPP
# define COLOURS_HPP

# define RESET "\033[0m"
# define RED "\033[31m"
# define BOLDRED "\033[1m\033[31m"
# define GREEN "\033[32m"
# define BOLDGREEN "\033[1m\033[32m"
# define YELLOW "\033[33m"
# define BOLDYELLOW "\033[1m\033[33m"
# define BLUE "\033[34m"
# define BOLDBLUE "\033[1m\033[34m"
# define MAGENTA "\033[35m"
# define BOLDMAGENTA "\033[1m\033[35m"
# define CYAN "\033[36m"
# define BOLDCYAN "\033[1m\033[36m"
# define ORANGE "\033[38;5;208m"
# define BOLDORANGE "\033[1m\033[38;5;208m"
# define PURPLE "\033[38;5;129m"
# define BOLDPURPLE "\033[1m\033[38;5;129m"
# define PINK "\033[38;5;13m"
# define BOLDPINK "\033[1m\033[38;5;13m"

#endif














#ifndef TEMPWORKER_HPP
#define TEMPWORKER_HPP

#include "Employee.hpp"

class TempWorker : public Employee
{
    private:
        int hoursWorked;
        
    public:
        TempWorker(int hourlyValue);
        TempWorker(const TempWorker &src);
        ~TempWorker(void);

        TempWorker &operator=(const TempWorker &src);

        void mobilize(int hours);
        int executeWorkDay(void) override;
        int calculateMonthlyPay(void) const override;  
};

#endif














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
















#ifndef CONTRACTEMPLOYEE_HPP
#define CONTRACTEMPLOYEE_HPP

#include "Employee.hpp"

class ContractEmployee : public Employee
{
    private:
        int hoursMissed;

    public:
        ContractEmployee(int hourlyValue);
        ContractEmployee(const ContractEmployee &src);
        ~ContractEmployee(void);

        ContractEmployee &operator=(const ContractEmployee &src);

        void registerAbsence(int hours);
        int executeWorkDay(void) override;
        int calculateMonthlyPay(void) const override;

};

#endif














#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

#include "Employee.hpp"

class Apprentice : public Employee
{
    private:
        int hoursMissed;
        int schoolHours;

    public:
        Apprentice(int hourlyValue);
        Apprentice(const Apprentice &src);
        ~Apprentice(void);

        Apprentice &operator=(const Apprentice &src);

        void registerAbsence(int hours);
        void registerSchoolHours(int hours);
        int executeWorkDay(void) override;
        int calculateMonthlyPay(void) const override;
        
};

#endif














#include "../includes/ContractEmployee.hpp"

ContractEmployee::ContractEmployee(int value) : Employee(value), hoursMissed(0)
{
}

ContractEmployee::ContractEmployee(const ContractEmployee &src) : Employee(src), hoursMissed(src.hoursMissed)
{
}

ContractEmployee::~ContractEmployee(void)
{
}

ContractEmployee &ContractEmployee::operator=(const ContractEmployee &src)
{
    if (this != &src)
    {
        Employee::operator=(src);
        this->hoursMissed = src.hoursMissed;
    }
    return (*this);
}

void ContractEmployee::registerAbsence(int hours)
{
    this->hoursMissed += hours;
}

int ContractEmployee::executeWorkDay(void)
{
    this->hoursWorked += 7;
    return (this->hoursWorked);
}

int ContractEmployee::calculateMonthlyPay(void) const
{
    return ((this->hoursWorked - this->hoursMissed) * this->hourlyValue);
}

























#include "../includes/Employee.hpp"

Employee::Employee(int value) : hourlyValue(value)
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














#include "../includes/Apprentice.hpp"

Apprentice::Apprentice(int value) : Employee(value), hoursMissed(0), schoolHours(0)
{
}

Apprentice::Apprentice(const Apprentice &src) : Employee(src), hoursMissed(src.hoursMissed), schoolHours(src.schoolHours)
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
    this->hoursWorked +=7;
    return (this->hoursWorked);

}

int Apprentice::calculateMonthlyPay(void) const
{
    int workHours = (this->hoursWorked - this->hoursMissed - this->schoolHours);
    return ((workHours* this->hourlyValue) + (this->schoolHours * this->hourlyValue / 2));
}















#include "../includes/TempWorker.hpp"

TempWorker::TempWorker(int value) : Employee(value), hoursWorked(0)
{
}

TempWorker::TempWorker(const TempWorker &src) : Employee(src), hoursWorked(src.hoursWorked)
{
}

TempWorker::~TempWorker(void)
{
}

TempWorker &TempWorker::operator=(const TempWorker &src)
{
    if (this != &src)
    {
        Employee::operator=(src);
        this->hoursWorked = src.hoursWorked;
    }
    return (*this);
}

void TempWorker::mobilize(int hours)
{
    this->hoursWorked += hours;
}

int TempWorker::executeWorkDay(void)
{
    this->hoursWorked += 7;
    return (this->hoursWorked);
}

int TempWorker::calculateMonthlyPay(void) const
{
    return (this->hoursWorked * this->hourlyValue);
}




















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
    employees.erase(std::remove(employees.begin(), employees.end(), employee), employees.end());
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
        std::cout << "Monthly pay: " << employee->calculateMonthlyPay() << std::endl;
    }
}


