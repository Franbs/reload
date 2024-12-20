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
		return (0);
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*int is_hello(char *str) {
    return (strcmp(str, "hello") == 0) ? 1 : 0;
}
int	main()
{
	char *tab[] = {1, 2, 1, 5, NULL};
	int count = ft_count_if(tab, is_hello);
	printf("The string 'hello' appeared %d times.\n", count);
	return (0);
}*/