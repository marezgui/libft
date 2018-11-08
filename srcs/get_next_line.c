/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 05:27:13 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/15 09:47:58 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*join;

	join = ft_strjoin(s1, s2);
	free(s1);
	return (join);
}

static	size_t	ft_getline(char **line, char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != DELIM)
		i++;
	*line = ft_strsub(str, 0, i);
	return (i);
}

static	char	*ft_strsubfree(char *str, unsigned int pos, size_t len)
{
	char	*sub;

	sub = ft_strsub(str, pos, len);
	free(str);
	return (sub);
}

int				get_next_line(const int fd, char **line)
{
	static	char	*str[OPEN_MAX];
	char			buffer[BUFF_SIZE + 1];
	ssize_t			rbytes;
	size_t			pos;
	size_t			len;

	if (fd < 0 || fd > OPEN_MAX || read(fd, "", 0) < 0 || line == NULL)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	while ((rbytes = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[rbytes] = '\0';
		str[fd] = ft_strjoinfree(str[fd], buffer);
		if (ft_strchr(str[fd], DELIM))
			break ;
	}
	len = ft_strlen(str[fd]);
	if (!len)
		return (0);
	pos = ft_getline(line, str[fd]);
	str[fd] = ft_strsubfree(str[fd], ((unsigned int)pos + 1), (len - pos));
	return (1);
}
