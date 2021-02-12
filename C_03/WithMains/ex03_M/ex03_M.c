#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (i2 != nb)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char s1[15] = "Hi";
	char s2[5] = "Hello";
	unsigned int n = 2;

	printf("%s", ft_strncat(s1, s2, n));
	return 0;
}

