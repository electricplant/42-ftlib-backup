/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:52:34 by dgerhard          #+#    #+#             */
/*   Updated: 2023/11/07 14:52:36 by dgerhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char	*filler;

	if (s == NULL)
		return (NULL);
	filler = s;
	while (n)
	{
		*filler = c;
		filler++;
		n--;
	}
	return (s);
}
