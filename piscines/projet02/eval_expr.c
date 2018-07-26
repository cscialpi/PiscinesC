/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   eval_expr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 17:21:46 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 19:18:38 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_proto.h"

int		ft_number(char **str)
{
	int nbr;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nbr = ft_sum(str);
		if (**str == ')')
			return (nbr);
	}
	return (ft_atoi(str));
}

int		ft_factor(char **str)
{
	int nbr;
	int nbr2;
	char op;

	while (**str)
	{
		nbr = ft_number(str);
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' || op != '*' || op != '%')
			return (nbr);
		(*str)++;
		nbr2 = ft_number(str);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		ft_sum(char **str)
{
	int nbr;
	int nbr2;
	char op;

	while (**str)
	{
		nbr = ft_factor(str);
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '-' || op != '+')
			return (nbr);
		(*str)++;
		nbr2 = ft_factor(str);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *str)
{
	return (ft_sum(&str));
}
