#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	int nb = 3;
	int power = 0;

	printf("%d", ft_recursive_power(nb, power));
	return 0;
}
