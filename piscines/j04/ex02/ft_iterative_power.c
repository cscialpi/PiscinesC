/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 02:20:59 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 02:26:53 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	if (power <= 0)
		return (0);
	i = nb;
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}
