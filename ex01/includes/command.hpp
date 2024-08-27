/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:45:51 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:44:13 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <iostream>
# include <unordered_map>
# include <vector>

class Command
{
    protected:
        static int _id;
        std::string _date;
        std::string _client;
        std::unordered_map<std::string, int> _articles;
        std::unordered_map<std::string, double> _prices;

    public:
        Command(void);
        Command(int id, std::string date, std::string client, 
            std::unordered_map<std::string, int> articles, 
            std::unordered_map<std::string, double> prices);
        Command(const Command &src);
        virtual ~Command();

        Command &operator=(const command &src);

        const int &getId(void) const;
        const std::string &getDate(void) const;
        const std::string &getClient(void) const;
        const std::unordered_map<std::string, int> &getArticles(void) const;

        void setId(const int &id);
        void setDate(const std::string &date);
        void setClient(const std::string &client);
        void setArticles(const std::unordered_map<std::string, int> &articles);



        virtual double get_total_price(void) const;

};

#endif
