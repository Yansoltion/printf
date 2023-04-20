/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:15:47 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/15 22:32:09 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr_pf(char *str, size_t *counter)
{
    if (!str)
        str = "(null)";
    while(*str)
    {
        ft_putchar_pf(*str, counter);
        str++;
    }
}