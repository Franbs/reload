/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:04:08 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/11 14:50:49 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*
int main()
{
    int num = 5;  // Example number
    int result;

    result = ft_iterative_factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}*/
