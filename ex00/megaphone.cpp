// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   magaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 14:13:31 by sdurr             #+#    #+#             //
//   Updated: 2015/06/15 14:23:46 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	capitalise(char *s)
{
	char	buf[ft_strlen(s) + 1];
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
			buf[i] = s[i] - 32;
		else
			buf[i] = s[i];
		i++;
	}
	buf[i] = '\0';
	std::cout << buf;
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			capitalise(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
