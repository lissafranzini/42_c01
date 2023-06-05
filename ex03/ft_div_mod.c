/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldellefr <ldellefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:44:38 by ldellefr          #+#    #+#             */
/*   Updated: 2023/06/05 15:53:20 by ldellefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	div = &a;
	mod = &b;
	a = 22;
	b = 10;
	ft_div_mod(a, b, div, mod);
	printf("resultado da divisao eh %d", *div);
	printf("modulo eh %d", *mod);
}*/
