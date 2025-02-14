/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:14:55 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/23 12:27:21 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
    int num = 16;  // Example number
    printf("Square root of %d is %d\n", num, ft_sqrt(num));
    return 0;
}*/
