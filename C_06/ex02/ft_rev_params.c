/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 22:20:45 by isousa            #+#    #+#             */
/*   Updated: 2020/12/13 14:39:44 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *string;

	string = str;
	while (*string != '\0')
	{
		write(1, string, 1);
		string++;
	}
}

int		main(int argc, char **argv)
{
	int j;

	j = argc - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
