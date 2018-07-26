/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 13:08:39 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 20:33:44 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nbr;

	i = 0;
	nbr = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	return (nbr * neg);
}

int		main(void)
{
	printf("%d", ft_atoi("58 trou du cul et sa pine"));
	return (0);
}
