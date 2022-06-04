/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:29:49 by kangjkim          #+#    #+#             */
/*   Updated: 2022/06/01 19:27:05 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    if(nb==-2147483648){
        ft_putchar('-');
        ft_putchar('2');
        nb=147483648;
    }else if(nb<0){
        nb=-nb;
    }
    if(nb>=10){
        ft_putnbr(nb/10);
    }
    ft_putchar(nb%10+'0');
}
