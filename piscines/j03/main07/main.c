/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 11:24:10 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 12:10:35 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int	main()
{
	char str[] = "100010020010055000";
	printf("%s", ft_strrev(str));
	return(0);
}
