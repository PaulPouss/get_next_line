/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppousser <ppousser@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:02:01 by ppousser          #+#    #+#             */
/*   Updated: 2026/03/05 15:39:23 by ppousser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char

char	*get_next_line(int fd)
{
	char	*line;
	char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup("");
	if(!buffer)
		return (NULL);
	buffer = read_buffer_size(fd);
	if (*buffer == '\0')
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	line = extract_line(buffer);
}
