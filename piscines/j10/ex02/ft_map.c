/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 12:44:43 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:27:26 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *nt;

	i = 0;
	*nt = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		nt[i] = f(tab[i]);
		i++;
	}
	return (nt);
}
