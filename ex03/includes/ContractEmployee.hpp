/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:49:26 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 16:50:44 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
