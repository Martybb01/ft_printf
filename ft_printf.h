/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:19:19 by marboccu          #+#    #+#             */
/*   Updated: 2023/10/28 16:12:21 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nb);
int ft_unint_base(unsigned int nb);
int ft_hexa_low(unsigned int nb);
int ft_hexa_up(unsigned int nb);
int ft_puthexa(uintptr_t ptr, int num);
int ft_printf(const char *format, ...);

#endif
