/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:45:52 by kangjkim          #+#    #+#             */
/*   Updated: 2022/05/31 20:56:30 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_rev_int_tab(int *tab, int size){
	int i;
	int cnt;
	int temp[size];
	i=size-1;
	cnt=0;
	while(i>=0){
		temp[i]=tab[cnt];
		i--;
		cnt++;
	}
	cnt=0;
	while(cnt<size){
		tab[cnt]=temp[cnt];
		cnt++;
	}
}

