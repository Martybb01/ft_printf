/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:57:28 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/27 18:26:53 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

int ft_putnbr(int nb)
{
    int i;

    i = 0;
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
        i++;
    }
    if (nb >= 10)
    {
        i += ft_putnbr(nb / 10);
        i += ft_putnbr(nb % 10);
    }
    else
    {
        i += ft_putchar(nb + 48);
    }
    return (i);
}

int ft_unint_base(unsigned int nb)
{
    char *base;
    int i;

    i = 0;
    base = "0123456789";
    if (nb >= 10)
    {
        i += ft_unint_base(nb / 10);
        i += ft_unint_base(nb % 10);
    }
    else
    {
        i += ft_putchar(base[nb]);
    }
    return (i);
}
// print a number in hexadecimal lowercase format
int ft_hexa_low(unsigned int nb)
{
    char *base;
    int i;

    i = 0;
    base = "0123456789abcdef";
    if (nb >= 16)
    {
        i += ft_hexa_low(nb / 16);
        i += ft_hexa_low(nb % 16);
    }
    else
        i += ft_putchar(base[nb]);
    return (i);
}

// print a number in hexadecimal uppercase format
int ft_hexa_up(unsigned int nb)
{
    char *base;
    int i;

    i = 0;
    base = "0123456789ABCDEF";
    if (nb >= 16)
    {
        i += ft_hexa_up(nb / 16);
        i += ft_hexa_up(nb % 16);
    }
    else
        i += ft_putchar(base[nb]);
    return (i);
}

int ft_puthexa(uintptr_t ptr, int num)
{
    char *base;
    int i;

    base = "0123456789abcdef";
    i = 0;

    if (!num)
        i += ft_putstr("0x");
    if (ptr >= 16)
    {
        i += ft_puthexa(ptr / 16, 1);
        i += ft_puthexa(ptr % 16, 1);
    }
    else
        i += ft_putchar(base[num]);
    return (i);
}
