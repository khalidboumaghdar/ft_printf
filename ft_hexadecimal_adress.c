/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_adress.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:45:29 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/20 11:34:27 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadecimal_adress(void *c)
{
	unsigned long	nb;
	int				count;

	count = 0;
	// if (c == 0)
	// 	return (ft_putstr_fd("(nil)", 1));
	if (c == NULL)
		return (ft_putstr_fd("(nil)", 1));
	count += ft_putstr_fd("0x", 1);
	nb = (unsigned long)c;
	count += covert_lower_hexadecimal(nb);
	return (count);
}
