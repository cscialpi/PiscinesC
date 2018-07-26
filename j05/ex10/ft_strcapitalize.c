/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 14:05:31 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 17:39:34 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	i = 0;
	maj = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z')) && maj == 0)
			maj = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && maj == 1)
		{
			str[i] -= 32;
			maj = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			maj = 0;
		i++;
	}
	return (str);
}
