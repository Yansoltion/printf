/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:36:06 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/21 00:55:21 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr, size_t *counter)
{
	unsigned long	ptr_adress;

	ptr_adress = (unsigned long)ptr;
	ft_putstr_pf ("0x", counter);
	ft_ptrtohexa_pf (ptr_adress, counter, 87);
	return (0);
}
