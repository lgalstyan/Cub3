#include "cub3d.h"

 void	*ft_memset(void *b, int c, size_t len)
 {
 	size_t			i;

 	i = 0;
 	while (i < len)
 	{
 		((unsigned char *)b)[i] = c;
 		i++;
 	}
 	return (b);
 }

 void	*ft_calloc(size_t count, size_t size)
 {
 	char	*s;
 	size_t	i;

 	i = count * size;
 	s = malloc(i);
 	ft_memset(s, 0, i);
 	return (s);
 }