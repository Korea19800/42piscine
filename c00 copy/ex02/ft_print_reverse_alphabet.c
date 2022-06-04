/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:08:33 by kangjkim          #+#    #+#             */
/*   Updated: 2022/06/03 09:37:07 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	alphabet = 'z';
	while (alphabet == 'a' - 1)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
