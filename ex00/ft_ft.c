/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:54:20 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/05 17:14:20 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nbr is a pointer to an int, function set value (*) of pointer as 42

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

	ft_ft(nbr);
}*/
