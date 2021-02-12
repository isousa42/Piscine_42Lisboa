#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0')
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
	char dest[15] = "Hi";
	char src[5] = "Hello";
	printf("%s", ft_strcat(dest, src));
	return 0;
}
