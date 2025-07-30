/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:15:27 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/30 21:44:08 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constractor :
Zombie::Zombie(void)
{
	this->name = "unknown";
}

// Destractor :
Zombie::~Zombie() {std::cout << "Destracor called !!"<< std::endl;}

// Methods :
void	Zombie::announce()
{
	std::cout << "<"<< this->name <<">: "<<"BraiiiiiiinnnzzzZ.."<<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return (this->name);
}
