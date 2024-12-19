/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:56:24 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/19 13:09:02 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = (int *)malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = '\0';
	return (range);
}
