/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:51:09 by bkhalid           #+#    #+#             */
/*   Updated: 2025/11/20 22:29:03 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_check(char c, va_list args)
{
	int	t;

	t = 0;
	if (c == 's')
		t += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'u')
		t += ft_putnber_unsigned(va_arg(args, unsigned int));
	else if (c == 'd' || c == 'i')
		t += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'X')
		t += convert_hexa_decimall(va_arg(args, unsigned int));
	else if (c == 'x')
		t += covert_lower_hexadecimal(va_arg(args, unsigned int));
	else if (c == 'p')
		t += hexadecimal_adress(va_arg(args, void *));
	else if (c == 'c')
		t += ft_putchar_fd((char)va_arg(args, int), 1);
	else if (c == '%')
		t += ft_putchar_fd('%', 1);
	return (t);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		t;
	int		i;
	char	*chack;

	chack = "cspdiuxX%";
	t = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1]
			&& ft_strchr(chack, format[i + 1]))
			t += format_check(format[++i], args);
		else
			t += ft_putchar_fd(format[i], 1);
		if (format[i])
			i++;
	}
	va_end(args);
	return (t);
}
