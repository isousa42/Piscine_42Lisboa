#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;

	division = *a / *b;
	*b = *a % *b;
	*a = division; 
	
}

int main()
{
	int c;
	int s;
	int *a;
	int *b;

	c = 495;
	s = 10;
	a = &c;
	b = &s;
	printf("a is %d\n", *a);
	printf("b is %d\n", *b);
	ft_ultimate_div_mod(a , b);
	printf("a is %d\n", *a);
	printf("b is %d\n", *b);

	return 0;
}
