/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:30:24 by kangjkim          #+#    #+#             */
/*   Updated: 2022/05/31 20:32:58 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod){
	if(b !=0){
		*div=a/b;
		*mod=a%b;
	}
}
