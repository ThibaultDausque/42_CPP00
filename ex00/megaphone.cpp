/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:02:43 by thibault          #+#    #+#             */
/*   Updated: 2025/04/12 14:44:47 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	
	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << (char)toupper(av[i][j]) << std::endl;
			j++;
		}
		if (av[i + 1])
			std::cout << " " << std::endl;
		i++;
	}
	return (0);
}
