/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:28:20 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 23:47:24 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string filename;
	std::string s1, s2;

	if (ac > 4 || ac < 4)
	{
		std::cout << "Try to tap : ./replace <filename> <s1> <s2>"<< std::endl;
		return (1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::cout << filename << " | " << s1  << " | " << s2 << " | " << std::endl;
	return (0);
}
