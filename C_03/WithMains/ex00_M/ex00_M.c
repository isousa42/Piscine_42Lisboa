#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

int main()
{
	char s2[] = "zapkir";
	char s1[] = "oweslm";

	printf("%i\n", ft_strcmp(s1, s2));
	return 0;
}


