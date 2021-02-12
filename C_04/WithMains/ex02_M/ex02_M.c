#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int num;

/*if (nb == 2147483648)
	{
		ft_putchar(2 + '0');
		ft_putnbr(147483648 + '0');
}*/
	if(nb < 0)
	{
		num = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else 
	{
		num = (unsigned int)(nb);
	}
		if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}

int main()
{
	ft_putnbr(9);
	write(1, "\n", 1);
	ft_putnbr(-25867);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(758);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	return 0;
}
