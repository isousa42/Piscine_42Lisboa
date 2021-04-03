/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:22:57 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 11:24:35 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

/*	READ THIS IF YOU DIND'T UNDERSTAND THE CODE:
**
**   *Make sure you understand ft_putchar() so you can understand this one.
**
**   In ft_print_alphabet() function, you don't receive anything by argument, so 
**	you need to create a variable of type char that I called 'i'. You do this
**	declaring a variable 'char i;'
**   Then you say 'i = 'a';' so you save the value 'a' inside of the variable 'i'.
**	Note that saying 'i = 97;' would be exactly the same. Check the ASCII table.
**
**   The while() is a loop, it means it will repeat a command while 'something' that
**	is inside the brackets is true. In this case it will repeat what is inside the
**	the curly brackets '{ ... }' while the variable 'i' it's minor or equal to the value 'z'.
**   If you notice, everytime it enters the while() it will write the value of 'i' (has we saw on ft_putchar()),
**	and the, the value of 'i' will be incremented. So 'i++;' is the same as saying 'i = i + 1;'.
**   The first time the variable 'i' enters the while, 'i' has the value of 'a' or 97 and we can see that 'a' is minor
**	that 'z', the same way 97 is minor than 122 (122 is the value of 'z' in ASCII table), so the while's condition
**	is true. Being true, it will print an 'a' using write() function and then increment (so, 'a' + 1 = 'b', or 
**	97 + 1 = 98, and 98 is the value of 'b'.
**   The loop will continue until the value of 'i' is bigger than 'z' (or 122). When it happens, all lowercase alphabet
**	has been printed in the terminal.
*/
