/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:18:24 by olarseni          #+#    #+#             */
/*   Updated: 2024/05/25 19:49:20 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		j = 0;
		i++;
	}
}
/*
int	main(void)
{
	int	i;

	int tab[] = {1, 3, 45, 0, 2, 4, 58, 9, 7, 10};
	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
		printf("%i ", tab[i++]);
	return (0);
}*/
