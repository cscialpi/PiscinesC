/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:39:09 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 17:33:24 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 2;
	}
	return (*s1 - *s2);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("Original: %d\n", strcmp(av[1], av[2]));
		printf("Funct: %d\n", ft_strcmp(av[1], av[2]));
	}
	return (0);
}
