#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power < 0)
		return 0;
	if (nb == 0 && power == 0)
		return 1;
	if (power > 0)
	{
		while (power > 0)
		{
			total = total * nb;
			power--;
		}
	}
	return total;
}

int main()
{
	int nb = 2;
	int power = 10;

	printf("%d", ft_interative_power(nb, power));
	return 0;
}

