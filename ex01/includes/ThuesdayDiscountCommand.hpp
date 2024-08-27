/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:56:42 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 20:08:23 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUESDDAYDISCOUNTCOMMAND_HPP
# define THUESDDAYDISCOUNTCOMMAND_HPP

# include <ctime>
# include "command.hpp"

class ThuesdayDiscountCommand : public Command
{

    private: 
        bool _is_thuesday(const std::string &date) const;

    public:
        ThuesdayDiscountCommand(void);
        ThuesdayDiscountCommand(int id, std::string date, std::string client, 
            std::unordered_map<std::string, int> articles, 
            std::unordered_map<std::string, double> prices);
        ThuesdayDiscountCommand(const ThuesdayDiscountCommand &src);
        virtual ~ThuesdayDiscountCommand();

        ThuesdayDiscountCommand &operator=(const ThuesdayDiscountCommand &src);

        virtual double get_total_price(void) const override;
};

#endif
