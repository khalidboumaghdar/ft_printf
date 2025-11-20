/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:17:50 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/17 09:46:05 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putnbr_fd(nb / 10, fd);
		count += ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
	{
		count += ft_putchar_fd(nb + '0', fd);
	}
	return (count);
}
