// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:23:58 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 13:56:36 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>

int main( void )
{
	srand(time(NULL));

	std::string		name[10] = {
		"Stephanie",
		"Geoffroy",
		"Ezio",
		"Thomas",
		"Hubert",
		"Matthieu",
		"Stephane",
		"Clara",
		"Gregory",
		"Aurelien",
	};

	int				index = rand() % 10;
	ZombieEvent		one;
	Zombie*			test = one.newZombie(name[index]);

	index = rand() % 10;

	Zombie*			test1 = one.newZombie(name[index]);

	test->announce();
	one.setZombieType(test, "mangeur");
	test->announce();
	test1->announce();

	delete test;
	delete test1;

	return 0;
}
