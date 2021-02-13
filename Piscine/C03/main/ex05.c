#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "dest";
	char *s2 = "sr";
	unsigned int nb = 2;
	int result;
	int resultft;
	result = strlcat(s1, s2, nb);
	resultft = ft_strlcat(s1, s2, nb);
	printf("%d\n%d", result, resultft);
}
