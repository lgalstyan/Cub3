/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:41:32 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/20 17:54:06 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (c < 0 || c > 127)
		return ((char *) s);
	while (s[i] || c == 0)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc (ft_strlen (s1) + ft_strlen (s2) + 1);
	if (!str)
		return (0);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[j] = '\0';
	if (s1)
		free(s1);
	return (str);
}

char	*ft_substr(char	*s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	slen;

	i = 0;
	if (!s || !*s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		len = 0;
	else if (slen - start < len)
		len = slen - start;
	str = malloc(sizeof(char) * (len + 1));
	while (len > i && s[start + i])
	{
		slen = ft_strlen(s);
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*tox;

	i = 0;
	if (!src)
		return (0);
	tox = (char *)malloc(ft_strlen(src) + 1);
	if (!tox)
		return (0);
	while (src[i])
	{
		tox[i] = src[i];
		i++;
	}
	tox[i] = 0;
	return (tox);
}
