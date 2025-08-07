/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 05:24:05 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/02 05:24:41 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "== DEBUG ==" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n== INFO ==" << std::endl;
	harl.complain("INFO");

	std::cout << "\n== WARNING ==" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n== ERROR ==" << std::endl;
	harl.complain("ERROR");

	std::cout << "\n== UNKNOWN ==" << std::endl;
	harl.complain("NOTHING");

	return (0);
}
