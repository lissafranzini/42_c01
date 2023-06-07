/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:38:07 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:49:00 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function reverts order of itens of an array
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;

	size = size - 1;
	counter = 0;
	while (counter < size)
	{
		temp = tab[counter];
		tab[counter] = tab[size];
		tab[size] = temp;
		counter++;
		size--;
	}
}

/*int	main(void)
{
	int	array[6];

	array[0] = 76;
	array[1] = 4;
	array[2] = 45;
	array[3] = 87;
	array[4] = -1;
	array[5] = 798;
	printf ("O array era \n%d", array[0]);
	printf ("\n%d", array[1]);
	printf ("\n%d", array[2]);
	printf ("\n%d", array[3]);
	printf ("\n%d", array[4]);
	printf ("\n%d", array[5]);
	ft_rev_int_tab(array, 6);
	printf ("\nO array ficou \n%d", array[0]);
	printf ("\n%d", array[1]);
	printf ("\n%d", array[2]);
	printf ("\n%d", array[3]);
	printf ("\n%d", array[4]);
	printf ("\n%d", array[5]);
}*/
