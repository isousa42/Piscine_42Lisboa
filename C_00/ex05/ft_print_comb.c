/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:41:11 by isousa            #+#    #+#             */
/*   Updated: 2020/11/29 17:45:19 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(char n, char i, char s)
{
	ft_putchar(n);
	ft_putchar(i);
	ft_putchar(s);
	if (!(n == '7' && i == '8' && s == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char n;
	char i;
	char s;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			s = i + 1;
			while (s <= '9')
			{
				print_char(n, i, s);
				s++;
			}
			i++;
		}
		n++;
	}
}

/*		READ THIS IF YOU DIND'T UNDERSTAND THE CODE:
**
**  *Make sure you understand the previous functions of this subject to understand this one.
**
**  The target of this function is for it to print all possible different combinations of 3 digits,
**		without repeating numbers and or combinations, listed in ascending order and separated by ','.
**
**	First of all, you need to understand that we have a "main fuction" that is ft_print_comb, but we have 
**		two more functions in this file. This fuctions are "utils" that are needed to the "main function" to
**		work. If we didn't have our friend Norminette, you could write everything in one function, but in this
**		case you need to divid it so it doesn't pass the 25 lines in one function.
**	Something you should know as well: In C, the compiler will read your file 'Up-to-down', so your "main fuction"
**		should be the last one appearing in the file. Imagine it is the first one in the file, when you call 
** 		the next function it will give you an error, because the compiler doesn't know where the fuction your calling is. 
**		Every function you call should be above the one calling it, in the file.
**	So, ft_print_comb() is the last one appearing in my file. ft_print_comb() calls the function print_char() that comes
**		before ft_print_comb() in the file. Then, print_char() calls ft_putchar() that is the first one appearing in the file.
**	This way the compiler already knows where the fuctions are and can execute them with no problem.
**	There's other ways for you to make this work, like putting the prototype of each function in the beggining of the file
**		or creating a header. You will learn it one day, don't worry.
**
**	Continuing...
**	ft_print_comb will only "select" the numbers you want to print. I declared 3 different variables of type char (n, i and s).
**	The variable 'n' is going to be the first one of the combination, than 'i', than 's'. Do you agree that 'n', being the 
**		"hundreds" number is always going to be the bigger one? It will control the possibilities of the other two digits.
**	The same thing happens with 'i' in relation with 's'.
**	
**	So we start by iniciating the variable 'n = '0'', then, the value of 'i' is always going to be 'n + 1', and 's' is 'i + 1'.
**		In this way, the numbers will always be different. 
**	Example: If 'n = '0'', than 'i = '1'' and 's = '2''.
**
**	We iniciate 3 While() loops, one inside the other that is inside the bigger one. Each While() is used to select the digits
**		to print and, after it, increment the variables. 
**	The first while starts with 'n' being equal to '0', so the condition is true (because 'n' is minor than '7'), so 'i' is equal 
**		to '1'. the second While is also true ('i' is minor than '8'), so it will set the value of 's' to '2'. The third While is also
**		true ('s' is minor than '9'), so it will call print_char(n, i, s). 
**	
**	This function receives the value of 'n', 'i' and 's' as arguments, and will print it in this order. 
**	In the first time it passes, it will print the number '012'. Then, we have that scary thing in the if() statement.
**	The '!' simbol, means 'different of', or 'if it is not true'. When we have a '!', the condition is going to be true if the statement is not true.
**	So, if we have 'n = 0', 'i = 1' and 's = 2' then the (n == '7' && i == '8' && s == '9') is not true. 
**	
**	Btw, the '==' is used to do a comparation between values, to see if something is equal to something else. 
**	Btw, the '&&' is used in conditions to do both things, in the right or left side of '&&', so in this case, the condition is only true if all the
**		conditions (separated by the '&&') are true. 
**
**	Ok, we saw that the condition is not true, so what is inside the curly brackets '{...}' of the if would not happen, but we have the '!', so it will happen. 
**	You see? It's the oposite. If you still don't understand this part, it's fine, there's a lot of videos on youtube about this. 
**
**	While the number is not 789, it will always wnter the if statement, and will always write the ',' and ' ' (space) in the terminal, using ft_putchar, that
**		you already know very well for shore.
**	After printing the number and the separations, it will return to the ft_print_comb() function and continue. It will increment the variables, and repeat the process
**		with all the different combinations.
**	After '012', the 's' will be incremented first, so the combination will be '013', then '014'... When 's' is bigger than 9, the third while is not true anymore, 
**		so it will increment the 'i', that will be 2 and after enter the second while again, it will set the 's' variable to '3' (s = i + 1). So the combination will 
**		be '023', then '024, then '025. 
**	It will do exactly the same with the 'n' incrementation. 
**	These will happen until we arrive on '789'. This is the last possible combination, all the 3 Whiles will not be true, so the function don't have anything more to do.
**
**	The job is done.	
*/