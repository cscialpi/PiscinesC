/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:07:30 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 18:57:10 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	printf("%s\n", ft_strstr("dfghfdkwafmnksda", "fmnk"));
	printf("%s\n", ft_strstr("	ndkfsnk", "dk"));
	printf("%s\n", ft_strstr("dsknfvks	dsmlvm", ""));
	printf("%s\n", ft_strstr("ffsndfjvbsjv dnsfkn", " "));
	printf("%s\n", ft_strstr(" kefndsk", "ke"));
	printf("%s\n", ft_strstr(" 	 , ", " , "));
	printf("%s\n", ft_strstr("djnsiq owmdk", "q o"));
	printf("%s\n\n", ft_strstr("sbcsdjv saofa kfnksd", " kf"));
	printf("%s\n", strstr("dfghfdkwafmnksda", "fmnk"));
	printf("%s\n", strstr("  ndkfsnk", "dk"));
	printf("%s\n", strstr("ffsndfjvbsjv dnsfkn", " "));
	printf("%s\n", strstr(" kefndsk", "ke"));
	printf("%s\n", strstr("dsknfvks	dsmlvm", "	"));
	printf("%s\n", strstr("   , ", " , "));
	printf("%s\n", strstr("djnsiq owmdk", "q o"));
	printf("%s\n", strstr("sbcsdjv saofa kfnksd", " kf"));
	return (0);
}
