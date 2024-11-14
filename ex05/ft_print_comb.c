/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:29:19 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/11 15:04:15 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		x;
	char	d1;
	char	d2;
	char	d3;

	x = 0;
	while (x <= 999)
	{
		d1 = 48 + (x / 100);
		d2 = 48 + (x / 10) % 10;
		d3 = 48 + x % 10;
		if (d1 < d2 && d2 < d3)
		{
			write(1, &d1, 1);
			write(1, &d2, 1);
			write(1, &d3, 1);
			if (x < 789)
			{
				write(1, ", ", 2);
			}
		}
		x ++;
	}
}
/*int main ()
{
	ft_print_comb();
	return 0;
}*/
