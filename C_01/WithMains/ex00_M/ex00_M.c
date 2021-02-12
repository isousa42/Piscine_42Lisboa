#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int *lol;
	int i;

	i = 4;
	lol = &i;
	ft_ft(lol);
	printf("%d", i);
	return 0;
}
