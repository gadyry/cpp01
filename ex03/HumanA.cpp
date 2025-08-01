/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 05:21:09 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 10:30:09 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& n, Weapon& w)
		: name(n), weapon(w) {}

HumanA::~HumanA()
{
	std::cout <<"Call destractor from HumanA"<<std::endl;
}
