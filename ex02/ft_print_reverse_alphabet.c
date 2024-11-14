/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:22:43 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/11 14:49:42 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reletter;

	reletter = 'z';
	while (reletter >= 'a')
	{
		write (1, &reletter, 1);
		reletter --;
	}
}
/*int   main ()
{
        ft_print_reverse_alphabet();
        return (0);
}*/
