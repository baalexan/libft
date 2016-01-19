/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:32:10 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/05 15:34:41 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		i;
	char	*s3;

	i = 0;
	n = 0;
	if (s1 && s2)
	{
		s3 = (char *)malloc(sizeof(*s3) * (ft_strlen((char *)s1) +
					ft_strlen((char *)s2 + 1)));
		if (s3 == NULL)
			return (NULL);
		while (((char *)s1)[n] != '\0')
		{
			s3[n] = ((char *)s1)[n];
			n++;
		}
		while (((char *)s2)[i] != '\0')
			s3[n++] = ((char *)s2)[i++];
		s3[n] = '\0';
		return (s3);
	}
	return (NULL);
}
