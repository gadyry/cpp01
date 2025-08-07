/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 05:32:21 by ael-gady          #+#    #+#             */
/*   Updated: 2025/08/02 05:39:10 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void nothing( std::string level );
public :
	void complain( std::string level );
};

#endif
