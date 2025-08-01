/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 05:21:27 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/01 10:25:44 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private :
	std::string type;
public :
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType() const;
	void	setType(std::string type);
};

#endif
