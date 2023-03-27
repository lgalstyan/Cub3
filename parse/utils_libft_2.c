#include "cub3d.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (0);
    return (1);
}