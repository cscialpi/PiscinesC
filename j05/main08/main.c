/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 13:34:24 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 13:44:49 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strupcase(char *str);

int		main()
{
	char str[] = "bonjour";

	printf("%s", ft_strupcase(str));
	return (0);
}
