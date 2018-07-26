/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   repeat_alpha.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/26 13:32:10 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 13:45:55 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int i;
	int letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = argv[1][i] - 64;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = argv[1][i] - 96;
			while (letter)
			{
				write(1, &argv[1][i], 1);
				letter--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
