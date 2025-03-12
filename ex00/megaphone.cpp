/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:02:43 by thibault          #+#    #+#             */
/*   Updated: 2025/03/12 18:11:52 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	main(int ac, char **av)
{
	int		i;
	int		j;
	
	i = 1;
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			cout << (char)toupper(av[i][j]);
			j++;
		}
		if (av[i + 1])
			cout << " ";
		i++;
	}
	return (0);
}