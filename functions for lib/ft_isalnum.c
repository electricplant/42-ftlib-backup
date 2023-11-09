/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:20 by dgerhard          #+#    #+#             */
/*   Updated: 2023/11/06 15:52:22 by dgerhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char character)
{
	if ((character >= 'a') && (character <= 'z'))
		return (1);
	if ((character >= 'A') && (character <= 'Z'))
		return (1);
	if ((character >= '0') && (character <= '9'))
		return (1);
	return (0);
}

// int main(void)
// {
//     char a = '1';
//     if (ft_isalnum(a) == 1)
//         __builtin_printf("%s", "gud");
//     else
//         __builtin_printf("%s", "no gud");
// }