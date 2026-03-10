/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppousser <ppousser@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:51:56 by ppousser          #+#    #+#             */
/*   Updated: 2026/03/04 15:37:31 by ppousser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	*next_line;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	next_line = get_next_line(fd);
	while (next_line != NULL)
	{
		free(next_line);
		printf("%s\n", next_line);	
		next_line = get_next_line(fd);
	}
	free(next_line);
	close(fd);
	return (0);
}
