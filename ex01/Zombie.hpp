/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:16:56 by ael-gady          #+#    #+#             */
/*   Updated: 2025/07/31 03:38:36 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie
{
private :
	std::string	name;
public:
	Zombie(void);
	~Zombie();
	void		announce( void );
	void		setName(std::string name);
	std::string getName();
};
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	Zombie* zombieHorde( int N, std::string name );
#endif