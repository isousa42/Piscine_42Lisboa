#include <stdio.h>

int ft_is_prime(int nb)
{
	int divisors;
	int i;

	divisors = 0;
	i = 1;
	if (nb == 0 || nb == 1)
		return 0;
	while (0 < nb)
	{
		nb /= i;
		if (nb % 2 == 0)
		{
			divisors++;
		}
		i++;
	}
	if (divisors == 1)
		return (1);
	else
		return (0);
}

int ft_find_next_prime(int nb)
{
	while (nb != 0)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
			break ;
		}
		else
			nb++;
	}
	return 0;
}

int main()
{
	int nb = 4;

	printf("%d", ft_find_next_prime(nb));
	return 0;
}
