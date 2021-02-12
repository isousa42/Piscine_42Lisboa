/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:23:35 by isousa            #+#    #+#             */
/*   Updated: 2020/12/11 12:18:23 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisors;
	int i;

	divisors = 0;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
		{
			divisors = 1;
			break ;
		}
		i++;
	}
	if (divisors == 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (nb == 4)
		nb++;
	while (nb != 0)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
			break ;
		}
		else
			nb++;
	}
	return (0);
}
