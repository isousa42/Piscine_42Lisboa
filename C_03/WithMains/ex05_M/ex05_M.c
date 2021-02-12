#include <stdio.h>

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *dest2;
	char *src2;
	unsigned int len;
	unsigned int destsize;

	dest2 = dest;
	src2 = src;
	len = size;	
	while (len-- != 0 && *dest2 != '\0')
		dest2++;
	destsize = dest2 - dest;
	len = size - destsize;
	if (len == 0)
		return (destsize + ft_strlen(src2));
	while (*src != '\0')
	{
		if (len != 1)
		{
			*dest2++ = *src2;
			len--;
		}
		src2++;
	}
	*dest2 = '\0';
	return(destsize + (src2 - src));
}

int main()
{
	char dest[15] = "Hello42Lisboa";
	char src[10] = "HelloBaby";
	int size = 40;
	
	size = ft_strlen(dest);
	printf("%i", ft_strlcat(dest, src, size));
	return 0;

}

