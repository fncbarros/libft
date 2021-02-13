#include <stdio.h>
#include <libc.h>

int main()
{
	char	d[] = "123456";
	char	s[] = "12345";
	unsigned int n = 5;

	unsigned int result = strlcpy(d, s, n);
	unsigned int resultft = ft_strlcpy(d, s, n);
	printf("%u\n", result);
	printf("%u", resultft);
}
