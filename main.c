/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:00:17 by marboccu          #+#    #+#             */
/*   Updated: 2023/11/05 00:00:53 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	void *ptr;

	int x = 42;
	ptr = &x;

	ft_printf("Hello %p ciao\n", ptr);
	printf("Hello %p ciao\n", ptr);
	return (0);
}
