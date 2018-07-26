/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 16:13:36 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 16:32:22 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}

void	ft_putstr_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar_error(str[i]);
		i++;
	}
}

void	ft_error(int e)
{
	if (e == 1)
		ft_putstr_error("arguments'number is not valid");
	else if (e == 2)
		ft_putstr_error("map error");
	else
		ft_putstr_error("RTFM!");
}
