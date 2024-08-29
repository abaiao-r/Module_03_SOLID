/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempWorker.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:49:30 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/29 16:01:24 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
