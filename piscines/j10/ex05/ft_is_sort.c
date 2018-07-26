/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_sort.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:14:28 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:21:47 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((f(tab[i], tab[i + 1]) == 0) && i < length)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
	{
		while (i < length)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	if (f(tab[i], tab[i + 1]) > 0)
	{
		while (i < length)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
}
