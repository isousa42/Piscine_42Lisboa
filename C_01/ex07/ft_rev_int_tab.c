/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:52:53 by isousa            #+#    #+#             */
/*   Updated: 2020/12/03 18:53:40 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while (i < size)
	{
		a = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = a;
		i++;
		size--;
	}
}
