/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_first_param.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 13:57:33 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 14:16:45 by cscialpi    ###    #+. /#+    ###.fr     */
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
	if (argc <= 1)
		write(1, "\n", 1);
	else
	{
		ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
