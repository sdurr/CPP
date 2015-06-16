// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:32:29 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 15:50:07 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main( void )
{
	std::string myString = "HI THIS IS BRAIN";
	std::string* myPtrString = &myString;
	std::string& myRefString = myString;

	return 0;
}
