#include <stdio.h>

int ft_is_prime(int nb)
{
	int divisors;
	int i;

	divisors = 0;
	i = 2;
	if (nb == 0 || nb == 1)
		return 0;
	while (i < nb / 2)
	{
		if (nb % i == 0)
		{
			divisors = 1;
			break ;
		}
		i++;
	}
	if (divisors == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int nb = 7;

	printf("%d", ft_is_prime(nb));
	return 0;
}
