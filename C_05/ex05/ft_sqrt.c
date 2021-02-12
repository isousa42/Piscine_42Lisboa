/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:16:36 by isousa            #+#    #+#             */
/*   Updated: 2020/12/11 12:14:34 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calcule(int nb, int result, int estimate)
{
	if (result * result <= 2147483647 && result * result == nb)
		return (result);
	if (result == estimate)
		return (0);
	else
		return (ft_calcule(nb, (result + (nb / result)) / 2, result));
}

int		ft_sqrt(int nb)
{
	if (nb <= 0 || nb == 3)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_calcule(nb, nb / 2, 2));
}
