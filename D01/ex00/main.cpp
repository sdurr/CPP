// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 09:09:38 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 10:10:58 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

void	PonyOnTheStack( void )
{
	Pony stack;

	std::cout << "Pony on the stack is create" << std::endl;
}

void	PonyOnTheHeap( void )
{
	Pony * heap = new Pony;

	std::cout << "Pony on the heap is create" << std::endl;
	delete heap;
	std::cout << "Pony on the heap is delete" << std::endl;
}

int		main( void )
{
	PonyOnTheStack();
	std::cout << "Pony on the Stack is delete" << std::endl;
	PonyOnTheHeap();
}
