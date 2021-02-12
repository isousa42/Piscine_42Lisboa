/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:01:17 by isousa            #+#    #+#             */
/*   Updated: 2020/12/09 16:14:06 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_valid_base(char *base)
{
	int		checknum;
	char	*base2;

	base2 = base;
	if (*base2 == 0 || (*base2 + 1) == 0)
		return (0);
	while (*base2 != '\0')
	{
		if (*base2 == '+' || *base2 == '-')
			return (0);
		checknum = 1;
		while ((*base2 + checknum) != '\0')
		{
			if (*(base2 + checknum) == *base2)
				return (0);
			checknum++;
		}
		base2++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int num;
	unsigned int basesize;

	if (ft_check_valid_base(base))
	{
		if (nbr < 0)
		{
			num = (unsigned int)(-1 * nbr);
			ft_putchar('-');
		}
		else
			num = (unsigned int)nbr;
		basesize = ft_strlen(base);
		if (num >= basesize)
		{
			ft_putnbr_base(num / basesize, base);
			ft_putnbr_base(num % basesize, base);
		}
		else
		{
			ft_putchar(*base + num);
		}
	}
}
