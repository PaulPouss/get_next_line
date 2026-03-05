/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppousser <ppousser@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:02:18 by ppousser          #+#    #+#             */
/*   Updated: 2026/03/04 15:13:03 by ppousser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	if (nmemb * size == 0)
		return (malloc(1));
	if (nmemb > (SIZE_MAX / size))
		return (NULL);
	res = malloc((nmemb * size));
	if (!res)
		return (NULL);
	while (i < (size * nmemb))
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	size_t	copy;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res = ft_calloc(1, 1);
		return (res);
	}
	if (len > (ft_strlen(s) - start))
		copy = ft_strlen(s) - start;
	else
		copy = len;
	res = ft_calloc(copy + 1, sizeof(char));
	if (!res)
		return (NULL);
	while ((i < copy) && (s[start + i] != '\0'))
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}

