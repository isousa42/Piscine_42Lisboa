#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main ()
{
	int a;
	int *lol1;
	int **lol2;
	int ***lol3;
	int ****lol4;
	int *****lol5;
	int ******lol6;
	int *******lol7;
	int ********lol8;
	int *********lol9;

	a = 60;
	lol1 = &a;
	lol2 = &lol1;
	lol3 = &lol2;
	lol4 = &lol3;
	lol5 = &lol4;
	lol6 = &lol5;
	lol7 = &lol6;
	lol8 = &lol7;
	lol9 = &lol8;
	ft_ultimate_ft(lol9);
	printf("%d", a);
	return 0;
}

