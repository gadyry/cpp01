/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 05:21:18 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 11:13:27 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private :
	Weapon* weapon;
	std::string name;
public :
	HumanB(std::string name);
	HumanB(std::string name, Weapon* w);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon& weapon);
	Weapon* getWeapon();
};

#endif
