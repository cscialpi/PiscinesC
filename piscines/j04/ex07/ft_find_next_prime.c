/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 22:33:47 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:48:31 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	if (nb == 3 || nb == 5 || nb == 7 || nb == 2)
		return (nb);
	while (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		nb++;
	return (nb);
}