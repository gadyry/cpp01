/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:16:47 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 03:06:00 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *zombie = new(std::nothrow) Zombie();
	if (!zombie)
	{
		std::cerr << "Failed to create Zombie !"<<std::endl;
		return (NULL);
	}

	zombie->setName(name);

	return (zombie);
}
