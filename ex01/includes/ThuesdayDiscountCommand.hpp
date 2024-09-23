/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:56:42 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/09/24 00:20:03 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUESDDAYDISCOUNTCOMMAND_HPP
#define THUESDDAYDISCOUNTCOMMAND_HPP

#include "command.hpp"

class ThuesdayDiscountCommand : public Command
{
	private:
		bool _is_thuesday(const std::string &date) const;

	public:
		ThuesdayDiscountCommand(std::string date, std::string client,
								std::unordered_map<std::string, int> articles,
								std::unordered_map<std::string, double> prices);
		ThuesdayDiscountCommand(const ThuesdayDiscountCommand &src);
		virtual ~ThuesdayDiscountCommand();
		ThuesdayDiscountCommand &operator=(const ThuesdayDiscountCommand &src);

		virtual double get_total_price(void) const override;
};

#endif
