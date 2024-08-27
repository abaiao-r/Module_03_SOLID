/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:09:11 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 20:56:54 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
# define PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP

# include "command.hpp"

class PackageReductionDiscountCommand : public Command
{
    public:
        PackageReductionDiscountCommand(std::string date, std::string client, 
            std::unordered_map<std::string, int> articles, 
            std::unordered_map<std::string, double> prices);
        PackageReductionDiscountCommand(const PackageReductionDiscountCommand &src);
        virtual ~PackageReductionDiscountCommand();

        PackageReductionDiscountCommand &operator=(const PackageReductionDiscountCommand &src);

        virtual double get_total_price(void) const override;
};

#endif
