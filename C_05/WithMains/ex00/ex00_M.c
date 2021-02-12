#include <stdio.h>

int	ft_interative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
		return 0;
	if (nb == 0 || nb == 1)
		return 1;
	if (nb > 1)
	{
		while (nb != 0)
		{
			total = total * nb;
			nb--;
		}
	}
	return (total);
}

int main() 
{
	int nb;

	nb = 5;
	printf("%d", ft_interative_factorial(nb));
	return 0;
}

