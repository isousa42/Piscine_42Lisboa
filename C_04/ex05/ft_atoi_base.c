/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:27:23 by isousa            #+#    #+#             */
/*   Updated: 2020/12/09 16:29:48 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_check_valid_base(char *base)
{
	int		checknum;
	char	*base2;

	base2 = base;
	if (*base2 == 0 || (*base2 + 1) == 0)
		return (0);
	while (*base2 != '\0')
	{
		if (*base2 == '+' || *base2 == '-')
			return (0);
		checknum = 1;
		while ((*base2 + checknum) != '\0')
		{
			if (*(base2 + checknum) == *base2)
				return (0);
			checknum++;
		}
		base2++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *str1;
	char *tof;

	if (*to_find == '\0')
		return (str);
	str1 = str;
	tof = to_find;
	while (true)
	{
		if (*tof == '\0')
			return ((char *)(str1 - (tof - to_find)));
		if (*str1 == *tof)
			tof++;
		if (*str1 == '\0')
			break ;
		str1++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int				sign;
	unsigned int	num;

	sign = 1;
	num = 0;
	if (ft_check_valid_base(base))
	{
		while ((*str == 32) || (*str >= 9 && *str <= 13))
			str++;
		while ((*str == 45) || (*str == 43))
		{
			if (*str == 45)
				sign = sign * -1;
			str++;
		}
		while (ft_strstr(base, str))
		{
			num = num * ft_strlen(base);
			num = num + (unsigned int)(ft_strstr(base, str) - base);
			str++;
		}
	}
	return (int)(num * sign);
}
