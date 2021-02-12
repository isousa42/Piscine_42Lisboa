#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}

int main()
{
	int a;
	int b;
	int divison;
	int modulo;
	int *div;
	int *mod;

	a = 4;
	b = 5;
	div = &divison;
	mod = &modulo;
	ft_div_mod(a, b, div, mod);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *div);
	printf("%d\n", *mod);

	return 0;
}

