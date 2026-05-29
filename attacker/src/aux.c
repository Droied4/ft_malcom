#include "ft_malcolm.h"

void *ft_memmem(const void *haystack, size_t haystacklen,
                const void *needle, size_t needlelen)
{
    const unsigned char *h = haystack;
    const unsigned char *n = needle;

    if (needlelen == 0)
        return (void *)h;

    for (size_t i = 0; i <= haystacklen - needlelen; i++)
    {
        if (memcmp(h + i, n, needlelen) == 0)
            return (void *)(h + i);
    }

    return NULL;
}

void	*ft_memset(void *str, int c, size_t len)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < (int) len)
		s[i++] = c;
	return ((char *)str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = -1;
	if (!dst && !src)
		return (0);
	while (n > ++i)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = -1;
	while (++i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
