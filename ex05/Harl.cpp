/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 05:45:11 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/02 06:45:18 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout<<"I cannot believe adding extra bacon costs more money."
		 	<< " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for"
			<< "years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::nothing( std::string level )
{
	std::cout << "Invalid log level: " << level << std::endl;
}

// void 	Harl::complain(std::string level)
// {
// 	if (level == "DEBUG")
// 		debug();
// 	else if (level == "INFO")
// 		info();
// 	else if (level == "WARNING")
// 		warning();
// 	else if (level == "ERROR")
// 		error();
// }

void 	Harl::complain(std::string level)
{
	typedef void (Harl::*HarlFnct)();
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFnct complainFct[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complainFct[i])();
			return ;
		}
	}
	nothing(level);
}
