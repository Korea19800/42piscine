/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:16:17 by kangjkim          #+#    #+#             */
/*   Updated: 2022/06/01 18:16:47 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_sort_int_tab(int *tab, int size){
    int tmp=0;
    int i=0;
    while(i<size){
        int j=0;
        while(j<size-1){
            if(tab[j]>tab[j+1]){
                tmp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=tmp;
            }
            j++;
        }
        i++;
    }
}

