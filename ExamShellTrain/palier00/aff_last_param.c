/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_last_param.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 14:03:19 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 14:15:40 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		if (argv[argc - 1][i])
			ft_putstr(&argv[argc -1][i]);
	}
	write(1, "\n", 1);
	return (0);
}
