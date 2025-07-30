/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rndomChump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:16:50 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/30 21:38:52 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie *zombie = new Zombie();

	zombie->setName(name);
	zombie->announce();
}
