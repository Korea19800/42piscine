/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:05 by kangjkim          #+#    #+#             */
/*   Updated: 2022/06/03 00:35:19 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	interim;

	interim = *a;
	*a = *b;
	*b = interim;
}
