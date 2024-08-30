/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:01:09 by andrefranci       #+#    #+#             */
/*   Updated: 2024/08/30 15:21:01 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
