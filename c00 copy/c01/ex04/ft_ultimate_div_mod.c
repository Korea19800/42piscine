/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:33:45 by kangjkim          #+#    #+#             */
/*   Updated: 2022/05/31 20:37:45 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_ultimate_div_mod(int *a, int *b){
	
	int div;
	int mod;

	if(*b != 0){
		div=(*a) / (*b);
		mod=(*a) % (*b);
		*a=div;
		*b=mod;
	}
}
