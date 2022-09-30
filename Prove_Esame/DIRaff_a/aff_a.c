/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:46:09 by grinella          #+#    #+#             */
/*   Updated: 2022/09/29 17:50:46 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (*argv[1])
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				argv[1]++;
				break;
			}
	}
	write(1, "\n", 1);
	return (0);
}