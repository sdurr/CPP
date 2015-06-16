// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 09:09:17 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 10:05:36 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony( void ) {
	std::cout << "Constructeur called" << std::endl;
	return ;
}

Pony::~Pony( void ) {
	std::cout << "Destructeur called" << std::endl;
	return ;
}

