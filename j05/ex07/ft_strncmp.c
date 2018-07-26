/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:23:44 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 16:34:55 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i] && i <= n)
		return (s1[i] - s2[i]);
	if (i >= n)
		return (0);
	return (0);
}
