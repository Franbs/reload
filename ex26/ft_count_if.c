/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:45:52 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/19 14:49:55 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!tab)
		return ;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
