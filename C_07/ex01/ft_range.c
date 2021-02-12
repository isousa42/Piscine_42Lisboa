/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:35:56 by isousa            #+#    #+#             */
/*   Updated: 2020/12/16 18:52:10 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int diff;
	int i;
	int *array;

	if (min >= max)
		return (0);
	diff = max - min;
	if ((array = malloc(diff * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (i <= diff)
	{
		array[i] = min + i;
		i++;
	}
	array[i] = '\0';
	return (array);
}
