/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:39:16 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 21:44:00 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char str[]  = "NULL";
	char str1[] = "aeawd";
	printf("%d\n", ft_strcmp("zicd", "aeawd"));
//	printf("%d\n", strcmp("zicd", NULL));
	printf("%d\n", ft_strcmp("zicd", NULL));
	printf("%d\n", strcmp("zicd", "zeawd"));
	printf("%d\n", ft_strcmp("aeawd", "zicd"));
	printf("%d\n", strcmp("aeawd", "zicd"));
//	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp("aeawd", "aeawd"));
	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp("NULL", "aeawd"));
	printf("%d\n", ft_strcmp("bonjorur", NULL));
	printf("%d\n", strcmp("aeawd", "NULL"));
	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp("NULL", "NULL"));
	printf("%d\n", ft_strcmp("", "aeawd"));
	printf("%d\n", strcmp("", "aeawd"));
	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp(str, str1));
	printf("%d\n", ft_strcmp("aeawd", ""));
	printf("%d\n", strcmp("aeawd", ""));
	return (0);
}
