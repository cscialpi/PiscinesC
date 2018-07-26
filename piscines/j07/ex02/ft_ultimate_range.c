/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 19:48:55 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:28:25 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

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

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	i = 0;
	while (i < (max - min))
		i++;
	return (i);
}
