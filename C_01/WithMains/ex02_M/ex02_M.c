#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int main()
{
	int n;
	int s;

	n = 42;
	s = 31;
	printf("%d\n", n);
	printf("%d\n", s);
	ft_swap(&n, &s);
	printf("%d\n", n);
	printf("%d\n", s);

	return 0;
}
