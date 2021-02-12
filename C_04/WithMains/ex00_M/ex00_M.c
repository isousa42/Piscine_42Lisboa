#include <stdio.h>

int	ft_strlen(char *str)
{
	char *string;
	int counter;

	string = str;
	counter = 0;
	while (*string != '\0')
	{
		counter++;
		string++;
	}
	return counter;
}

int main()
{
	char *str;

	str = "Hello";
	printf("%d", ft_strlen(str));
	

	return 0;
}
