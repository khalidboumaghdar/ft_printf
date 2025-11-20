/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_uper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:57:34 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/16 17:21:59 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_hexa_decimall(size_t nb)
{
	int	count;

	count = 0;
	if (nb <= 9)
		count += ft_printf("%d", nb);
	else if (nb == 10)
		count += ft_printf("%c", 'A');
	else if (nb == 11)
		count += ft_printf("%c", 'B');
	else if (nb == 12)
		count += ft_printf("%c", 'C');
	else if (nb == 13)
		count += ft_printf("%c", 'D');
	else if (nb == 14)
		count += ft_printf("%c", 'E');
	else if (nb == 15)
		count += ft_printf("%c", 'F');
	else
	{
		count += convert_hexa_decimall(nb / 16);
		count += convert_hexa_decimall(nb % 16);
	}
	return (count);
}
