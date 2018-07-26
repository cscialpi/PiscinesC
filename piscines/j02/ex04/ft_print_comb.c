/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 21:49:12 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 12:26:45 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 55)
	{
		b = 49;
		while (b <= 56)
		{
			c = 50;
			while (c <= 57)
			{
				if (a < b && b < c)
				{
					print(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
