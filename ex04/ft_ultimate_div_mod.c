/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:59:25 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:34:36 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function stores result of divison in a, and module in b
//variable temp is used to store one of the values to avoid overwriting
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = (*a / *b);
	*b = (temp % *b);
}

/*int	main(void)
{
	int	a_value;
	int	b_value;
	int	*a;
	int	*b;

	a_value = 23;
	b_value = 10;
	a = &a_value;
	b = &b_value;
	printf("valor do ponteiro a eh %d\n", *a);
	printf("valor do ponteiro b eh %d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("valor da divisão, alocada em a, ficou %d\n", *a);
	printf("valor do modulo, alocado em b, ficou %d\n", *b);
}*/
