/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 00:18:11 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 14:23:55 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	if (a != 98 && b != 99)
	{
		ft_putchar('0' + a / 10);
		ft_putchar('0' + a % 10);
		ft_putchar(' ');
		ft_putchar('0' + b / 10);
		ft_putchar('0' + b % 10);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	while	(a <= 98)
	{
		b = a + 1;
		while	(b <= 99)
		{
			if	(a > b)
			{
				print(a, b);
			}	
		b++;
		}	
	a++;
	}
}
