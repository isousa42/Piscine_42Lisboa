#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;

	if (
	while(i < size)
	{
		a = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = a;
		i++;
		size--;	
	}
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
	

int main()
{
	int n = 5;
	int tab[] = {1, 4, 3, 2, 4};

	ft_rev_int_tab(tab, n);	
	return 0;

}
