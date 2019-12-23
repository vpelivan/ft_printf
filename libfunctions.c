/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelivan <vpelivan@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 10:37:33 by vpelivan          #+#    #+#             */
/*   Updated: 2018/11/08 14:33:57 by vpelivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	const char *p;

	p = str;
	while (*p)
		p++;
	return (p - str);
}

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char*)&s[i]);
	return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	t_bzero			*t_bzero_s;
	unsigned char	*uchar_s;
	size_t			i;

	t_bzero_s = (t_bzero *)s;
	uchar_s = (unsigned char *)s;
	i = n - (n % sizeof(t_bzero));
	while (i < n)
		uchar_s[i++] = 0;
	n /= sizeof(t_bzero);
	while (n)
		t_bzero_s[--n] = 0;
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
