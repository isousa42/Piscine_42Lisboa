/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:20:10 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 14:21:29 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

/*	READ THIS IF YOU DIND'T UNDERSTAND THE CODE:
**
**   *Make sure you understand ft_print_alphabet so you can understand this one.
**
**   The ft_print_reverse_alphabet() works exactly the same way as ft_print_alphabet()
**		but using numbers instead of alphabetic characters.
**
**   The only changes is value of 'i' is '0' and then it is incremented in the while loop.
**		Notice that the while condiction is going to be true while 'i' is minor or equal to 9. 
**   For better compreension, review the explanation on ft_print_alphabet() function.
**
*/