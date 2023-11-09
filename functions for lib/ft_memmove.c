/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:20:38 by dgerhard          #+#    #+#             */
/*   Updated: 2023/11/09 11:20:42 by dgerhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*destination;
	char			*source;
	char			*temp;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (!(cpy = (char*)malloc(sizeof(char*) * len)))
		return (NULL);
	
	destination = dest;
	source = src;
	i = 0;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	

}