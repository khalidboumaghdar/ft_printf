/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:11:35 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/16 17:18:57 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	covert_lower_hexadecimal(size_t nb)
{
	int	count;

	count = 0;
	if (nb <= 9)
		count += ft_printf("%d", nb);
	else if (nb == 10)
		count += ft_printf("%c", 'a');
	else if (nb == 11)
		count += ft_printf("%c", 'b');
	else if (nb == 12)
		count += ft_printf("%c", 'c');
	else if (nb == 13)
		count += ft_printf("%c", 'd');
	else if (nb == 14)
		count += ft_printf("%c", 'e');
	else if (nb == 15)
		count += ft_printf("%c", 'f');
	else
	{
		count += covert_lower_hexadecimal(nb / 16);
		count += covert_lower_hexadecimal(nb % 16);
	}
	return (count);
}
