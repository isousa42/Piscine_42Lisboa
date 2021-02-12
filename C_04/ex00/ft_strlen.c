/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:05:40 by isousa            #+#    #+#             */
/*   Updated: 2020/12/09 15:56:41 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*string;
	int		counter;

	string = str;
	counter = 0;
	while (*string != '\0')
	{
		counter++;
		string++;
	}
	return (counter);
}
