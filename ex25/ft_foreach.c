/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:25:46 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/23 12:52:06 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void print_int(int n)
{
    printf("%d ", n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    ft_foreach(arr, length, print_int);  // Prints: 1 2 3 4 5

    return 0;
}*/
