/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprunty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 06:18:18 by mprunty           #+#    #+#             */
/*   Updated: 2023/03/07 07:13:21 by mprunty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	len_helper(unsigned x)
{
	if (x >= 1000000000)
		return (10);
	if (x >= 100000000)
		return (9);
	if (x >= 10000000)
		return (8);
	if (x >= 1000000)
		return (7);
	if (x >= 100000)
		return (6);
	if (x >= 10000)
		return (5);
	if (x >= 1000)
		return (4);
	if (x >= 100)
		return (3);
	if (x >= 10)
		return (2);
	return (1);
}

void	ft_putnbr(int nb)
{
	//if (!(nb < 10))
	//int lead_n;
	
	if	(nb > 10)
	{
		ft_putnbr(nb / 10);
	//	printf("%i",a);
	}
	else
	{
		int a;
		a = nb +48;
		write(1, &a ,1);
	}

	//printf("%i",nb % 10);

}
