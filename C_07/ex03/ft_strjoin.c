/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:19:09 by isousa            #+#    #+#             */
/*   Updated: 2020/12/16 18:49:52 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_matrix(int size, char **str)
{
	int		i;
	int		j;
	int		counter;

	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		i;
	int		j;

	array = (char *)malloc(sizeof(char) * ((ft_strlen(sep) *
					(size - 1)) + ft_count_matrix(size, strs) + 1));
	if (!array)
		return (0);
	i = 0;
	j = 0;
	array[0] = '\0';
	while (i < size)
	{
		array = ft_strcat(array, strs[j]);
		if (i < size - 1)
			ft_strcat(array, sep);
		j++;
		i++;
	}
	return (array);
}
