/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 18:24:53 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 18:36:37 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *t;

	if (min >= max)
		return (0);
	t = (int *)malloc(sizeof(*t) * (max - min));
	i = 0;
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
