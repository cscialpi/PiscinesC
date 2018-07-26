/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_reverse_alphabet.c                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 16:41:54 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 12:02:47 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 0;
	while (i <= 25)
	{
		ft_putchar('z' - i);
		i++;
	}
}
