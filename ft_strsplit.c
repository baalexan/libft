/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:33:09 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:52 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	a;
	char	**tab;
	size_t	i;
	int		begin;
	int		end;

	a = 0;
	i = 0;
	tab = NULL;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) + 1))))
	{
		while (s[i] != '\0')
		{
			while (s[i] == c && s[i])
				i++;
			begin = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if (end > begin)
				tab[a++] = ft_strsub(s, begin, (end - begin));
		}
		tab[a] = NULL;
	}
	return (tab);
}
