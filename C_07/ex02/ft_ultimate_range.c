/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:57:35 by isousa            #+#    #+#             */
/*   Updated: 2020/12/16 18:50:38 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	diff = max - min;
	if ((range[0] = malloc(diff * sizeof(int))) == NULL)
	{
		range[0] = 0;
		return (-1);
	}
	i = 0;
	while (i < diff)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	range[0][i] = '\0';
	return (i);
}
