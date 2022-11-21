void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s && i < n)
		return ((char *)s);
	return (0);
}
