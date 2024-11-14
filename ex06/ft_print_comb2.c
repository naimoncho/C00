/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:36:30 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/11 15:09:34 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
}

void	ft_print_comb2(void)
{
	int	count;
	int	d1;
	int	d2;
	int	d3;
	int	d4;

	count = 0;
	while (count <= 9899)
	{
		d1 = 48 + (count / 1000);
		d2 = 48 + (count / 100) % 10;
		d3 = 48 + (count / 10) % 10;
		d4 = 48 + count % 10;
		if (d1 * 10 + d2 < d3 * 10 + d4)
		{
			ft_write(d1, d2, d3, d4);
			if (count != 9899)
			{
				write(1, ", ", 2);
			}
		}
		count ++;
	}
}
/*int main ()
{
        ft_print_comb2();
        return 0;
}*/
