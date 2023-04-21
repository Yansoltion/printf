/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:18:42 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/21 00:54:34 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putunbr_pf(va_arg(va, int), counter);
	else if (*str == 'x')
		ft_inttohexa_pf(va_arg(va, unsigned int), counter, 87);
	else if (*str == 'X')
		ft_inttohexa_pf(va_arg(va, unsigned int), counter, 55);
	else if (*str == '%')
		ft_putchar_pf('%', counter);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
