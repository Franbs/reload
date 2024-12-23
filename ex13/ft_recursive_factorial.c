/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:10:20 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/23 13:11:53 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0  || (nb > 12))
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return ((nb * ft_recursive_factorial(nb - 1)));
}
/*
int main()
{
    int num = 5;  // Example number
    int result;

    result = ft_recursive_factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}*/
