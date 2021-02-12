#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return 0;
	return (*s1 - *s2);
}

int main()
{
	char s1[] = "zaqxswcu";
	char s2[] = "\0";
	unsigned int n;

	n = 2;
	printf("%i", ft_strncmp(s1, s2, n));
	return 0;
}
