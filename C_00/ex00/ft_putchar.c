/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 10:42:13 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 10:42:40 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


/*	EXPLANATION:
**
**   ft_putchar is a very simple fuction that will allow you to print
** 	a character in the terminal. 
**   You must include the 'unistd.h', so it will compile the fuction 
**	using this library. Fuction write() is "inside" the unistd library,
**	so if you don't include the 'unistd.h', it will not work.
**
**   The 'void' means ft_putchar() fucntion doesn't return anything. If you would 
**	like it to return and integer, for example, you would write 'int' instead
**	of 'void', but this is not the case.
**
**   The 'char c' inside of the ft_putchar() brackets '(char c)' means you are
**	receiving a variable 'c' by argument, that can have any value, like 'a' or 65.
**   I recommend you to check the ASCII table to understand that each character has a
**	numeric value that can be used instead of the a letter or character.
**   
**   The fuction write() receives 3 arguments inside '(1, &c, 1)'. The first argument '1'
**	means that it will write on the terminal (called standard output or stdout). This is a 
**	File Descriptor (FD) that tells the function where it will write, perhaps a file for example.
**   The second argument '&c' it's what it will actually write. So, if 'c = a', it will writa an 'a' in
**	the terminal. You need to put the '&' before the variable so it will write the value of it.
**
**   Note that in C language, you need the semi-colon ';' in the end of any command, so the compiler can
**	understand it.
*/
