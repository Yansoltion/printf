/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:33:35 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/21 00:48:34 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_putchar_pf(char c, size_t *counter);
int	ft_putstr_pf(char *str, size_t *counter);
int	ft_putptr_pf(void *ptr, size_t *counter);
int	ft_putnbr_pf(int num, size_t *counter);
int	ft_putunbr_pf(unsigned int num, size_t *counter);
int	ft_inttohexa_pf(unsigned int decimal, size_t *counter, int base);
int	ft_ptrtohexa_pf(unsigned long decimal, size_t *counter, int base);

#endif
