/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:17:40 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/19 12:46:22 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		l;
	int		i;

	i = 0;
	l = ft_length(src);
	dup = (char *)malloc((l + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
