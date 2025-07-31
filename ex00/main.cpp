/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:16:44 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 02:50:48 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie		*zombies = new Zombie[5];
	std::string	name;

	for (size_t i = 0; i < 5; i++)
	{
		name = "name";
		name += static_cast<char>('0' + i);
		zombies[i].setName(name);
	}

	for (size_t i = 0; i < 5; i++)
		zombies[i].announce();
}
