#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int a;

	a = ft_strlen((char *)s);

	while (s[a] != '\0' && c != *s)
		a--;
	if (c == *s)
		return ((char *)s);
	return (0);
}