#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  len;

    len = ft_strlen(src);
    ft_strncpy(dst, src, size);
    dst[len] = '\0';
    return (len);
}

