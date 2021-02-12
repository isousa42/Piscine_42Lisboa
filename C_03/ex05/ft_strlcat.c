/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:39:20 by isousa            #+#    #+#             */
/*   Updated: 2020/12/09 10:45:49 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest2;
	char			*src2;
	unsigned int	len;
	unsigned int	destsize;

	dest2 = dest;
	src2 = src;
	len = size;
	while (len-- != 0 && *dest2 != '\0')
		dest2++;
	destsize = dest2 - dest;
	len = size - destsize;
	if (len == 0)
		return (destsize + ft_strlen(src2));
	while (*src2 != '\0')
	{
		if (len != 1)
		{
			*dest2++ = *src2;
			len--;
		}
		src2++;
	}
	*dest2 = '\0';
	return (destsize + (src2 - src));
}
