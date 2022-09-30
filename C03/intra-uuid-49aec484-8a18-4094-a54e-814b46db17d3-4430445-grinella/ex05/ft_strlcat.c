/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:06:30 by grinella          #+#    #+#             */
/*   Updated: 2022/09/21 11:42:50 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	d;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	d = ft_strlen(src);
	if (size == 0 || size <= b)
		return (d + size);
	while (src [a] != '\0' && a < size - b - 1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (b + d);
}

#include <string.h>
int	main()
{
	char dest[] = "ciao", src[] = "testing";
	printf("%u", ft_strlcat(dest, src, 3));
}
