/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmika <wmika@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:27:11 by wmika             #+#    #+#             */
/*   Updated: 2021/10/22 10:27:16 by wmika            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new || !(s2))
		return (NULL);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
	}
	while (s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	free(s1);
	return (new);
}

char	*ft_strchr(char *s, int c)
{
	unsigned char	*new;
	int				i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = (unsigned char *)s;
	while (new[i] != '\0')
	{
		if (new[i] == (unsigned char)c)
			return ((char *)&new[i]);
		i++;
	}
	if (new[i] == (unsigned char)c)
		return ((char *)&new[i]);
	return ((void *) 0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = s;
	while (n--)
	{
		*c = '\0';
		c++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc (count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
