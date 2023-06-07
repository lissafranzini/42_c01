/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:54:20 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:03:28 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nbr is a pointer to an int, function set value (*) of pointer as 42
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	a;
	int	*nbr;

	a = 2;
	nbr = &a;
	printf("nbr era %d\n", *nbr);
	ft_ft(nbr);
	printf("nbr ficou %d", *nbr);
}*/
