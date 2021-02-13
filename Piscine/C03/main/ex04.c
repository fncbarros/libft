#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *a = "otorrinlaringologia";
	char *b = "rino";
	char *result = strstr(a, b);
	char *resultft = ft_strstr(a, b);
	printf("%s\n%s", result, resultft);
}
