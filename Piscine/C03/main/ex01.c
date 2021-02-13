#include <string.g>
#include <stdio.h>

int main()
{
	char str1[] = "abc";
	char str2[] = "abd";
	int n = 2;
	int result = strncmp(str1, str2, n);
	int resultft = ft_strncmp(str1, str2, n);
	printf("%d\n%d", result, resultft);
}
