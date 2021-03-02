#include "libft.h"
#include <stdio.h>

int main()
{
	void *p;
//	char s[] = {65, 66, 67, 68, 69, 0, 45};
//	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
//	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};	

	p = ft_memmove(sResult + 1, sResult, 2);
	printf("%d %d", (int)p, ft_memcmp(sResult, sResult2, 7));
}
