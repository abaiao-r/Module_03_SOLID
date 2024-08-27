/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:01:30 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 20:08:21 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ThuesdayDiscountCommand.hpp"

ThuesdayDiscountCommand::ThuesdayDiscountCommand(void)
{
}

ThuesdayDiscountCommand::ThuesdayDiscountCommand(int id, std::string date, std::string client, 
    std::unordered_map<std::string, int> articles, 
    std::unordered_map<std::string, double> prices) : Command(id, date, client, articles, prices)
{
}

ThuesdayDiscountCommand::ThuesdayDiscountCommand(const ThuesdayDiscountCommand &src) : Command(src)
{
}

ThuesdayDiscountCommand::~ThuesdayDiscountCommand(void)
{
}

ThuesdayDiscountCommand &ThuesdayDiscountCommand::operator=(const ThuesdayDiscountCommand &src)
{
    if(this != &src)
    {
        Command::operator=(src);
    }
    return (*this);
}

double ThuesdayDiscountCommand::get_total_price(void) const
{
    double total = Command::get_total_price();
    if(_is_thuesday(this->getDate()))
        total *= 0.9;
    return (total);
}

bool ThuesdayDiscountCommand::_is_thuesday(const std::string &date) const
{
    if (date == "Thuesday")
        return (true);
    return (false);
}


