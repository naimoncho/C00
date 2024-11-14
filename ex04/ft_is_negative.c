/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:28:05 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/11 14:53:45 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
/*int   main ()
{
        ft_is_negtive(-5);
	ft_is_negtive(0);
	ft_is_negtive(9);
        return (0);
}*/
