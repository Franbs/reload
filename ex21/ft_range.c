/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:56:24 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/24 18:18:59 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = (int *)malloc((max - min) * sizeof(int));
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
/*
int main()
{
    int min = 3, max = 8;
    int *range = ft_range(min, max);

    if (range)
    {
        for (int i = 0; i < max - min; i++)
            printf("%d ", range[i]);
        printf("\n");

        free(range);  // Free the allocated memory
    }

    return 0;
}*/
