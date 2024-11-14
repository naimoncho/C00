/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:14:26 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/11 16:06:15 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int n)
{
	char	character_n;
	int		number;

	number = n;
	if ((number / 10) != 0)
	{
		ft_recursive(number / 10);
	}
	character_n = 48 + (n % 10);
	write(1, &character_n, 1);
}

void	ft_putnbr(int nb)
{
	int		neg;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		neg = -nb;
		write(1, "-", 1);
		ft_recursive(neg);
	}
	else
	{
		ft_recursive(nb);
	}
}
/*int main()
{
        ft_putnbr(12233);
        ft_putnbr(5603);
        ft_putnbr(-560);
        ft_putnbr(0);
        ft_putnbr(-2147483648);

        return 0;
}*/
