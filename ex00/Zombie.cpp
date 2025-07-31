/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:15:27 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 04:17:49 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constractor :
Zombie::Zombie()
{
	this->name = "unknown";
}

// Destractor :
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is being destroyed." << std::endl;
}

// Methods :
void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return (this->name);
}
