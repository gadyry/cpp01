/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:28:20 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/02 05:20:15 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	init_args(char **av, std::string& filename,
		 std::string& s1, std::string& s2)
{
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
}

int main(int ac, char **av)
{
	std::string filename;
	std::string s1, s2, input;

	if (ac != 4)
	{
		std::cerr << "Try to tap : ./replace <filename> <s1> <s2>."<< std::endl;
		return (1);
	}
	init_args(av, filename, s1, s2);

	// std::ofstream out(filename);
	// out << "create a filename  :" << filename << std::endl;

	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Error: could not open input file '" << filename << "' for reading."<< std::endl;
		return (1);
	}
	while (69)
	{
		getline(in, input);
		if (input.empty())
			break;
		std::cout <<"this is a content of  "<<filename << " : " << input << std::endl;
	}
	return (0);
}
