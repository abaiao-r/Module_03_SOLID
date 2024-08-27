/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:35:14 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 21:04:44 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/command.hpp"
#include "../includes/ThuesdayDiscountCommand.hpp"
#include "../includes/PackageReductionDiscountCommand.hpp"
#include <iostream>

int main(void)
{
    std::unordered_map<std::string, int> articles = {
        {"apple", 2},
        {"banana", 2},
        {"orange", 1}
    };
    std::unordered_map<std::string, double> prices = {
        {"apple", 1},
        {"banana", 1},
        {"orange", 1}
    };

    Command *cmd1 = new ThuesdayDiscountCommand("Thuesday", "John", articles, prices);
    Command *cmd2 = new PackageReductionDiscountCommand("Monday", "Jane", articles, prices);


    std::cout << "Total price for cmd1: " << cmd1->get_total_price() << std::endl;
    std::cout << "Total price for cmd2: " << cmd2->get_total_price() << std::endl;

    // test for more than 150
    std::unordered_map<std::string, int> articles2 = {
        {"apple", 50},
        {"banana", 50},
        {"orange", 100}
    };

    std::unordered_map<std::string, double> prices2 = {
        {"apple", 1},
        {"banana", 1},
        {"orange", 1}
    };

    Command *cmd3 = new PackageReductionDiscountCommand("Monday", "Jane", articles2, prices2);
    std::cout << "Total price for cmd3: " << cmd3->get_total_price() << std::endl;

    // buy 150 on thuesday
    Command *cmd4 = new ThuesdayDiscountCommand("Thuesday", "John", articles2, prices2);
    std::cout << "Total price for cmd4: " << cmd4->get_total_price() << std::endl;

    delete cmd1;
    delete cmd2;
    delete cmd3;
    delete cmd4;


    return (0);
}