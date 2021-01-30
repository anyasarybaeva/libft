/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:22:06 by lbones            #+#    #+#             */
/*   Updated: 2020/11/17 04:48:47 by lbones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s21;
	size_t			i;
	size_t			i1;

	s11 = (unsigned char*)s1;
	s21 = (unsigned char*)s2;
	if (n < 1)
		return (0);
	while (n > 1 && *s11 == *s21)
	{
		n--;
		s11++;
		s21++;
	}
	i = *s11;
	i1 = *s21;
	return (i - i1);
}
