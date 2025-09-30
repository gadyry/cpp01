/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:37:51 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 03:51:47 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cerr << "N should be greater or equal 0 !"<<std::endl;
		return (NULL);
	}

    Zombie* zombies = new(std::nothrow) Zombie[N];

    if (!zombies)
	{
        std::cerr << "Memory allocation failed for zombie horde!\n";
        return (NULL);
    }
	for(int i = 0; i < N; i++)
		zombies[i].setName(name);

	return (zombies);
}
