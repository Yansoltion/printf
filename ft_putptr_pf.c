/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:36:06 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/20 23:15:17 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putptr_pf(void *ptr, size_t *counter)
{
    unsigned long ptr_adress;

    ptr_adress = (unsigned long)ptr;
    ft_putstr_pf("0x", counter);
    ft_ptrtohexa_pf(ptr_adress, counter, 87);
}