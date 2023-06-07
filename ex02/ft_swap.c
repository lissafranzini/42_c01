/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:28:14 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:07:22 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function swaps values of a and b
//variable temp is used to store one of the values to avoid overwriting
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 12;
	b = 64;
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("int a era 12 e ficou %d\n", *ptr_a);
	printf("int b era 64 e ficou %d", *ptr_b);
}*/
