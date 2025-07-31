/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 04:23:36 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 05:14:09 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "== 	The memory adress of : =="<<std::endl;
	std::cout << "The memory address of the string variable	: "<< &str <<std::endl;
	std::cout << "The memory address held by stringPTR 		: "<< stringPTR <<std::endl;
	std::cout << "The memory address held by stringRef 		: "<< &stringREF <<std::endl;

	std::cout << "== 	The Value of		: =="<<std::endl;
	std::cout << "The value of the string variable 		: "<< str <<std::endl;
	std::cout << "The value pointed to by stringPTR		: "<< *stringPTR <<std::endl;
	std::cout << "The value pointed to by stringREF		: "<< str <<std::endl;

	return (0);
}