/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:20:51 by isousa            #+#    #+#             */
/*   Updated: 2020/12/11 12:16:20 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisors;
	int i;

	divisors = 0;
	i = 2;
	if (nb <= 0 || nb == 1 || nb == 4)
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
