/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:31:39 by isousa            #+#    #+#             */
/*   Updated: 2020/12/07 21:13:53 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex;

	i = 0;
	hex = '0';
	while (str[i] != '\0')
	{
		if ((str[i] < ' ') || (str[i] > '~'))
		{
			hex = str[i] / 16;
			hex = str[i] % 16;
			write(1, &hex, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
