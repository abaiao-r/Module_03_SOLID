/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:34:23 by abaiao-r          #+#    #+#             */
/*   Updated: 2024/08/27 20:56:35 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/command.hpp"

int Command::_id = 0;

Command::Command(std::string date, std::string client,
				 std::unordered_map<std::string, int>	 articles,
				 std::unordered_map<std::string, double> prices)
{
	this->_id = Command::_id;
	Command::_id++;
	this->_date = date;
	this->_client = client;
	this->_articles = articles;
	this->_prices = prices;
}

Command::Command(const Command &src)
{
	this->_id = src._id;
	this->_date = src._date;
	this->_client = src._client;
	this->_articles = src._articles;
	this->_prices = src._prices;
}

Command::~Command(void)
{
}

Command &Command::operator=(const Command &src)
{
	if (this != &src)
	{
		this->_id = src._id;
		this->_date = src._date;
		this->_client = src._client;
		this->_articles = src._articles;
		this->_prices = src._prices;
	}
	return (*this);
}

const int &Command::getId(void) const
{
	return (this->_id);
}

const std::string &Command::getDate(void) const
{
	return (this->_date);
}

const std::string &Command::getClient(void) const
{
	return (this->_client);
}

const std::unordered_map<std::string, int> &Command::getArticles(void) const
{
	return (this->_articles);
}

void Command::setId(const int &id)
{
	this->_id = id;
}

void Command::setDate(const std::string &date)
{
	this->_date = date;
}

void Command::setClient(const std::string &client)
{
	this->_client = client;
}

void Command::setArticles(const std::unordered_map<std::string, int> &articles)
{
	this->_articles = articles;
}

double Command::get_total_price(void) const
{
	double total = 0.0;
	for (auto it = this->_articles.begin(); it != this->_articles.end(); it++)
	{
		total += this->_prices.at(it->first) * it->second;
	}
	return (total);
}
