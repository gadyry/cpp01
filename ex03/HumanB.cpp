/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 05:21:15 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 11:13:22 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon* w)
{
	this->name = name;
	this->weapon = w;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
}

Weapon* HumanB::getWeapon()
{
	return (this->weapon);
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " and has no weapen" << std::endl;
}

HumanB::~HumanB()
{
	std::cout <<"Call destractor from HumanB"<<std::endl;
}
