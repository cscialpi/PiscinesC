/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 10:57:17 by cscialpi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 12:49:50 by cscialpi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_display_file(char *file)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return ;
	while ((rd = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, rd);
	close(fd);
}
