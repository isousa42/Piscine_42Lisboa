#include <stdio.h>

int	meth(int nb, int result, int estimate)
{
	if (result * result <= 2147483647 && result * result == nb)
		return (result);
	if (result == estimate)
		return (0);
	else
		return (meth(nb, (result + (nb / result)) / 2, result));
}
int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (meth(nb, nb / 2, 2));
}

int main()
{
	int nb = 16;

	printf("%d", ft_sqrt(nb));
	return 0;
}

