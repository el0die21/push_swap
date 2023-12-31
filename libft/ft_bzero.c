/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:08:48 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/02 14:08:48 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*p;

	p = s;
	while (size > 0)
	{
		*p = '\0';
		size--;
		p++;
	}
}
