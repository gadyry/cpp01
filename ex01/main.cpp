/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:16:44 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 04:16:52 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int N = 8;
	Zombie* horde = zombieHorde(N, "From Dusk Till Dawn");

	for (size_t i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;

	std::cout <<"----------------------------------------------\n";

	Zombie zombie[8];
	for (size_t i = 0; i < 8; i++)
		zombie[i].announce();
	return (0);
}
