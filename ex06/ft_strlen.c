/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:29:07 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/07 14:45:08 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns the size of a given string
//variable result can store the value returned by function ft_sterlen
//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		str++;
		lenght++;
	}
	return (lenght);
}

/*int	main(void)
{
	int	result;

	ft_strlen("LissaLissaLissa");
	result = ft_strlen("LissaLissaLissa");
	printf ("\nresult is %d", result);
}*/
