/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:25:40 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/18 01:27:58 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putunbr_pf(unsigned int num, size_t *counter)
{
        if (num > 9)
            ft_putnbr_pf((num / 10), counter);
            ft_putchar_pf(('0' + num % 10), counter);
}