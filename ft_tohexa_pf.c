/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:43:40 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/20 23:14:14 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_inttohexa_pf(unsigned int decimal, size_t *counter, int base)
{
    char hexadecimal[20];
    int i;
    int remainder;
    
 
   
    i = 0;
    if (decimal == 0)
        ft_putchar_pf('0', counter);
    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i++] = remainder + 48;
        else
            hexadecimal[i++] = remainder + base;
        decimal /= 16;
    }
    
    int j = i - 1;
    while (j >= 0)
    {
    ft_putchar_pf(hexadecimal[j], counter);
    j--;
    }
 
}

void ft_ptrtohexa_pf(unsigned long decimal, size_t *counter, int base)
{
    char hexadecimal[20];
    int i;
    int remainder;
    
 
   
    i = 0;
    if (decimal == 0)
        ft_putchar_pf('0', counter);
    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i++] = remainder + 48;
        else
            hexadecimal[i++] = remainder + base;
        decimal /= 16;
    }
    
    int j = i - 1;
    while (j >= 0)
    {
    ft_putchar_pf(hexadecimal[j], counter);
    j--;
    }
 
}
