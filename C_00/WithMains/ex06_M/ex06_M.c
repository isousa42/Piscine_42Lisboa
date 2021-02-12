#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print(int i, int n, int e, int s)
{
        ft_putchar(i + '0');
        ft_putchar(n + '0');
        ft_putchar(' ');
        ft_putchar(e + '0');
        ft_putchar(s + '0');
		if ((i != 9) || (n != 8))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}
    
void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print((a / 10), (a % 10), (b / 10), (b % 10));
			b++;
		}
		a++;
	}
}
int main()
{
    ft_print_comb2();
    return 0;
}
