/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:18:19 by itoth             #+#    #+#             */
/*   Updated: 2017/04/05 14:18:20 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int			pf_ft_handler_s(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};

	pf_ft_apply_mask(f, mask_s);
	if (f->fla[10] == 1)
	{
		f->warg = va_arg(*ap, wchar_t*);
		pf_ft_handler_char(f);
		return (0);
	}
	else
		f->arg = va_arg(*ap, char*);
	if (f->arg == 0)
		f->arg = "(null)";
	pf_ft_handler_char(f);
	return (0);
}

int			pf_ft_handler_ws(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2};

	pf_ft_apply_mask(f, mask_s);
	f->warg = va_arg(*ap, wchar_t*);
	pf_ft_handler_char(f);
	return (0);
}
