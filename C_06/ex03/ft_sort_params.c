/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 22:28:07 by isousa            #+#    #+#             */
/*   Updated: 2020/12/13 14:47:04 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_arg(char **tab, int size)
{
	int		i;
	int		s;
	char	*swap;

	i = 1;
	while (i < size)
	{
		s = i + 1;
		while (s < size)
		{
			if (ft_strcmp(tab[s], tab[i]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[s];
				tab[s] = swap;
			}
			s++;
		}
		i++;
	}
}

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
	int i;

	ft_sort_arg(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
