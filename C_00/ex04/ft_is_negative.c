/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:41:20 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 14:43:00 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char i;
	char p;

	i = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &i, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/*		READ THIS IF YOU DIND'T UNDERSTAND THE CODE:
**
**	*Make sure you understand ft_putchar() and ft_print_alphabet()
**	
**	ft_is_negative() is going to wirte an 'N' or a 'P' depending if the integer 'n', passed
**		by argument is negative or positive, respectively.
**	I wrote 'void' because the function will not return anything to the main program.
**	
**	In this function I starded declaring two variables of type char ('i' and 'p') and then, 
**		I say the value of 'i' is the character 'N' and the value of 'p' is 'P'.
**
**	The if()...else() is a statement, so we can ask the fuction to do something if something is true, and
**		if it is not true it does something else. 
**
**	We receive by argument the integer 'n' that has some value. when it arrives on the 'if()' statement
**		it will check if 'n < 0'. If it is true, it will write the value of 'i' (that is the 'N', meaning it's negative).
**	If 'n >= 0' this if() statement is not true, so it will continue to the else statement, without doing what is
**		inside the curly brackets {...} of the if() statement. Then, it will do what is inside the else statement: 
**		it will print the value of 'p' (that is 'P', meaning it's positive).
**
**	Notice that if the confition on the if() statement is true, it will not do the commands on the else part. 
**		It does one or other, never both. 
*/
