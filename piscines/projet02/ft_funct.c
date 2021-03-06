/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_funct.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 17:01:55 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 19:23:09 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_proto.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char **str)
{
	int nb;
	int neg;

	nb = 0;
	neg = 1;
	while (**str == '\t' || **str == '\n' || **str == '\r' ||
		**str == '\v' || **str == ' ' || **str == '\f')
		(*str)++;
	if (**str == '-')
	{
		neg = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
	while (**str >= '0' && **str <= '9')
	{
		nb *= 10;
		nb += **str - '0';
		(*str)++;
	}
	return (nb * neg);
}
