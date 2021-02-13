#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "yo";
	char s2[] = "lo";
	unsigned int n = 2;
//	char *result = strncat(s1, s2, n);
	char *resultft = ft_strncat(s1, s2, n);
//	printf("%s", result);
	printf("%s", resultft);
}
