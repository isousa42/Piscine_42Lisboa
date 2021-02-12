#include <stdio.h>

void	ft_sort_int_tab (int *tab, int size)
{
	int i;
	int s;
	int swap;

	i = 0;
	while (i < size)
	{
		s = 0;
		while (s < (size - 1))
		{
			if (*(tab + i) < *(tab + s))
			{
				swap = *(tab + i);
				*(tab + i) = *(tab + s);
				*(tab + s) = swap;
			}
			s++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d", *(tab + i));
		i++;
	}
}

int main()
{
	int n = 5;
	int tab[] = {6, 9, 8, 4, 1};

	ft_sort_int_tab (tab, n);
	return 0;
}
