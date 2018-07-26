/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 22:14:02 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 22:34:52 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 30;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
	return(0);
}
