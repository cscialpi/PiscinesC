/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_proto.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 17:18:43 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 19:17:58 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PROTO_H
# define FT_PROTO_H

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);
int		ft_factor(char **str);
int		ft_number(char **str);
int		ft_sum(char **str);
int		eval_expr(char *str);

#endif
