#include <unistd.h>

void	ft_is_negative(int n)
{
	char i;
	char p;

	i = 'N';
	p = 'P';
	if (n < 0)
	{
		write (1, &i, 1);
	}
	else
	{
		write (1, &p, 1);
	}
}

int main()
{
	ft_is_negative(0);
	return 0;
}
