/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   first_word.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/26 11:18:02 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 11:56:11 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		ft_space(int i)
{
	if (i == '\t' || i == '\v' || i == '\f' || i == '\n' || i == ' ')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (ft_space(av[1][i]))
			i++;
		while (ft_space(av[1][i]) != 1 && av[1][i])
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
