/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 13:28:17 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:25:46 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_cat(argv[0], argv[i]);
		i++;
	}
	if (argc == 1 || argv[argc - 1][0] == '-')
	{
		ft_stdin();
		return (1);
	}
	return (0);
}
