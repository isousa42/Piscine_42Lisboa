/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:41:11 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 17:45:19 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(char n, char i, char s)
{
	ft_putchar(n);
	ft_putchar(i);
	ft_putchar(s);
	if (!(n == '7' && i == '8' && s == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char n;
	char i;
	char s;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			s = i + 1;
			while (s <= '9')
			{
				print_char(n, i, s);
				s++;
			}
			i++;
		}
		n++;
	}
}
