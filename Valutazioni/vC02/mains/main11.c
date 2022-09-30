/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:55:56 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/13 15:29:58 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int	ft_putstr_non_printable(char *str);

int main()
{
	char num_str[] = "Coucou\\ntu vas bien ?";
	char empty_str[] = "";
	char char_str[] = "Coucou\ntu vas bien ?";
	printf("\n\nESERCIZIO 11:\n");
	printf("stringa normale: \n");
	ft_putstr_non_printable(num_str);
	printf("\nstringa non printable: \n");
	ft_putstr_non_printable(char_str);
	printf("\nstringa vuota: \n\n");
	ft_putstr_non_printable(empty_str);
}
