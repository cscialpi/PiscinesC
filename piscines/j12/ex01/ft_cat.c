/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cat.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 12:39:41 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:33:16 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putstr_e(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_error(char *name_prog, char *file)
{
	if (errno == EACCES)
	{
		ft_putstr_e(name_prog);
		ft_putstr_e(": ");
		ft_putstr_e(file);
		ft_putstr_e(": Permission denied\n");
	}
	else if (errno == EISDIR)
	{
		ft_putstr_e(name_prog);
		ft_putstr_e(": ");
		ft_putstr_e(file);
		ft_putstr_e(": Is a directory\n");
	}
	else
	{
		ft_putstr_e(name_prog);
		ft_putstr_e(": ");
		ft_putstr_e(file);
		ft_putstr_e(": No such file or directory\n");
	}
}

void	ft_stdin(void)
{
	int		rd;
	char	buf[BUF_SIZE];

	rd = read(0, buf, BUF_SIZE);
	while (rd > 0)
	{
		buf[rd] = '\0';
		ft_putstr(buf);
		rd = read(0, buf, BUF_SIZE);
	}
}

void	ft_cat(char *name_prog, char *file)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_error(name_prog, file);
		return ;
	}
	while ((rd = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}
