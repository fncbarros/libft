#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
#endif
