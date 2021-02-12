#include <unistd.h>

void	ft_putstr(char *str)
{
	char *string;

	string = str;
	while (*string != '\0')
	{
		write(1, string, 1);
		string++;
	}
}

int main()
{
	char *str;

	str = "school 42";
	ft_putstr(str);
	
	return 0;
}
