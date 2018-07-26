/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 14:32:57 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 15:55:51 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char dest[] = "testestgfdsf";
	char src[] = "source";
	unsigned int n = 12;

	//printf("%s", strncpy(dest, src, n));
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
