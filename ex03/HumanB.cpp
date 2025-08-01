/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 05:21:15 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 09:11:33 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType();
}

HumanB::HumanB(std::string name, Weapon* w)
{
	this->name = name;
	this->weapon = w;
}
