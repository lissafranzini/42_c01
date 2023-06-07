/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:52:55 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:49:20 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	cter1;
	int	cter2;

	cter1 = 0;
	cter2 = cter1 +1;
	size = size -1;
	while (cter1 <= size)
	{
		while (cter2 <= size)
		{
			if (tab[cter2] <= tab[cter1])
			{
				aux = tab [cter1];
				tab[cter1] = tab[cter2];
				tab[cter2] = aux;
			}
			cter2++;
		}
		cter1++;
		cter2 = cter1 + 1;
	}
}

/*int	main(void)
{
	int	array[6];

	array[0] = 76;
	array[1] = 0;
	array[2] = 45;
	array[3] = 87;
	array[4] = 0;
	array[5] = 798;
	printf ("O array era \n%d", array[0]);
	printf ("\n%d", array[1]);
	printf ("\n%d", array[2]);
	printf ("\n%d", array[3]);
	printf ("\n%d", array[4]);
	printf ("\n%d", array[5]);
	ft_sort_int_tab(array, 6);
	printf ("\nO array ficou \n%d", array[0]);
	printf ("\n%d", array[1]);
	printf ("\n%d", array[2]);
	printf ("\n%d", array[3]);
	printf ("\n%d", array[4]);
	printf ("\n%d", array[5]);
}*/
