/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:33:25 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:55 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	int		a;
	char	*str;

	if (!s)
		return (NULL);
	a = 0;
	i = 0;
	l = ft_strlen(s) - 1;
	str = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (i >= l)
		return (ft_strdup(""));
	while ((s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		l--;
	if (!(str = (char *)malloc(sizeof(char) * (l - i + 2))))
		return (NULL);
	while (i <= l)
		str[a++] = s[i++];
	str[a] = '\0';
	return (str);
}
