#include <stdio.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *str1;
	char *tof;

	if (*to_find == '\0')
		return (str);
	str1 = str;
	tof = to_find;
	while (true)
	{
		if (*tof  == '\0')
			return((char *)(str1 - (tof - to_find)));
		if (*str1 == *tof)
			tof++;
		if (*str1 == '\0')
			break;
		str1++;
	}
	return 0;

}

int main ()
{
	char str[14] = "Lisboa";
	char to_find[5] = "Lisb";

	printf("%s", ft_strstr(str, to_find));
	return 0; 
}
