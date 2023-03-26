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

char	*gnl_strdup(char *s1)
{
	char	*dest;

	dest = malloc(gnl_strlen(s1) + 1);
	if (!dest || !s1)
		return (NULL);
	gnl_strcpy(dest, s1);
	return (dest);
}

char	*gnl_strchr(char *s, int c)
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

char	*gnl_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*ns;
	size_t	i;
	size_t	k;

	i = 0;
	ns = malloc(gnl_strlen(s1) + gnl_strlen(s2) + 1);
	if (!ns)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		ns[i] = s2[k];
		k++;
		i++;
	}
	ns[i] = '\0';
	if (s1)
		free(s1);
	return (ns);
}

char	*gnl_substr(char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	strs;

	i = 0;
	if (!*s || !s)
		return (NULL);
	if (start > gnl_strlen(s))
		strs = 0;
	else if (gnl_strlen(s) - start > len)
		strs = len;
	else
		strs = gnl_strlen(s) - start;
	substring = (char *)malloc((strs + 1) * sizeof(char));
	if (!substring)
		return (0);
	if (substring)
		gnl_strlcpy(substring, s + start, strs + 1);
	return (substring);
}

// int	gnl_strlen(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s && s[i] != 0)
// 		i++;
// 	return (i);
// }

// char	*gnl_strchr(char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (c < 0 || c > 127)
// 		return ((char *) s);
// 	while (s[i] || c == 0)
// 	{
// 		if (s[i] == c)
// 			return ((char *) s + i);
// 		i++;
// 	}
// 	return (0);
// }

// char	*gnl_strjoin(char *s1, char *s2)
// {
// 	int		i;
// 	int		j;
// 	char	*str;

// 	i = 0;
// 	j = 0;
// 	str = malloc (gnl_strlen (s1) + gnl_strlen (s2) + 1);
// 	if (!str)
// 		return (0);
// 	while (s1 && s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	while (s2 && s2[j])
// 		str[i++] = s2[j++];
// 	str[j] = '\0';
// 	if (s1)
// 		free(s1);
// 	return (str);
// }

// char	*gnl_substr(char	*s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*str;
// 	size_t	slen;

// 	i = 0;
// 	if (!s || !*s)
// 		return (0);
// 	slen = gnl_strlen(s);
// 	if (start > slen)
// 		len = 0;
// 	else if (slen - start < len)
// 		len = slen - start;
// 	str = malloc(sizeof(char) * (len + 1));
// 	while (len > i && s[start + i])
// 	{
// 		slen = gnl_strlen(s);
// 		str[i] = s[start + i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

// char	*gnl_strdup(char *src)
// {
// 	int		i;
// 	char	*tox;

// 	i = 0;
// 	if (!src)
// 		return (0);
// 	tox = (char *)malloc(gnl_strlen(src) + 1);
// 	if (!tox)
// 		return (0);
// 	while (src[i])
// 	{
// 		tox[i] = src[i];
// 		i++;
// 	}
// 	tox[i] = 0;
// 	return (tox);
// }
