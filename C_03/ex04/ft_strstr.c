/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:27:38 by isousa            #+#    #+#             */
/*   Updated: 2021/02/08 19:18:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *str1;
	char *tof;

	if (*to_find == '\0')
		return (str);
	str1 = str;
	tof = to_find;
	while (true)
	{
		if (*tof == '\0')
			return ((char *)(str1 - (tof - to_find)));
		if (*str1 == *tof)
			tof++;
		else
			tof = to_find;
		if (*str1 == '\0')
			break ;
		str1++;
	}
	return (0);
}
