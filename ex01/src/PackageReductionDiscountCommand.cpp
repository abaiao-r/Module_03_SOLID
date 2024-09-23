/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:11:13 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 20:58:34 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PackageReductionDiscountCommand.hpp"

PackageReductionDiscountCommand::PackageReductionDiscountCommand(
	std::string date, std::string client,
	std::unordered_map<std::string, int>	articles,
	std::unordered_map<std::string, double> prices)
	: Command(date, client, articles, prices)
{
}

PackageReductionDiscountCommand::PackageReductionDiscountCommand(
	const PackageReductionDiscountCommand &src)
	: Command(src)
{
}

PackageReductionDiscountCommand::~PackageReductionDiscountCommand(void)
{
}

PackageReductionDiscountCommand &PackageReductionDiscountCommand::operator=(
	const PackageReductionDiscountCommand &src)
{
	if (this != &src)
	{
		Command::operator=(src);
	}
	return (*this);
}

double PackageReductionDiscountCommand::get_total_price(void) const
{
	double total = Command::get_total_price();
	if (total > 150)
	{
		total -= 10;
	}

	return (total);
}
