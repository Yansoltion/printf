#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
int ft_printf(char const *str, ...);

// format functions 

void    ft_putchar_pf(char c, size_t *counter);
void    ft_putstr_pf(char *str, size_t *counter);
void ft_putptr_pf(void *ptr, size_t *counter);
void    ft_putnbr_pf(int num, size_t *counter);
void    ft_putunbr_pf(unsigned int num, size_t *counter);
void ft_inttohexa_pf(unsigned int decimal, size_t *counter, int base);
void ft_ptrtohexa_pf(unsigned long decimal, size_t *counter, int base);
#endif