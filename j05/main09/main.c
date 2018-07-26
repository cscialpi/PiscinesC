/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 13:51:49 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 13:58:37 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char str[] = "FEJBNSVJVNDKNJSKNCKSJVKSD";

	printf("%s", ft_strlowcase(str));
	return (0);
}
