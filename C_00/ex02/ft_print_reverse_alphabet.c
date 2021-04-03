/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:59:45 by isousa            #+#    #+#             */
/*   Updated: 2020/12/02 16:32:07 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}


/*	READ THIS IF YOU DIND'T UNDERSTAND THE CODE:
**
**   *Make sure you understand ft_print_alphabet so you can understand this one.
**
**   The ft_print_reverse_alphabet() works exactly the same way as ft_print_alphabet()
**		but on reverse, starting from the end of the alphabet to the begin.
**
**   The only changes is value of 'i' is 'z' and then it is decremented in the while loop.
**   For better compreension, review the explanation on ft_print_alphabet() function.
**
*/