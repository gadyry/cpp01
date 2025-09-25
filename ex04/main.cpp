/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:28:20 by ael-gady          #+#    #+#             */
/*   Updated: 2025/09/19 15:18:02 by ael-gady         ###   ########.fr       */
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
	std::string s1, s2, line;

	if (ac != 4)
	{
		std::cerr << "Try to tap : ./replace <filename> <s1> <s2>."<< std::endl;
		return (1);
	}
	init_args(av, filename, s1, s2);

	if (s1.empty())
	{
		std::cerr << "Error: string to replace (s1) must not be empty." << std::endl;
		return (1);
	}

	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Error: could not open input file '" << filename << "' for reading."<< std::endl;
		return (1);
	}

	std::ofstream out(filename + ".replace");
	if (!out)
	{
		std::cerr << "Error: could not create output file '" << filename << ".replace" << "'." << std::endl;
		return (1);
	}
	
	while (std::getline(in, line))
	{
		std::size_t pos = 0;
		std::size_t found = 0;
		
		if (!in.eof()) line += '\n';
		
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			
			pos = found + s2.length();
		}
		out << line;
	}
	return (0);
}
