/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:25 by dgerhard          #+#    #+#             */
/*   Updated: 2023/11/06 15:03:29 by dgerhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	return (0);
}

// int main(void)
// {
//     char a = '1';
//     if (ft_isalpha(a) == 1)
//         __builtin_printf("%s", "gud");
//     else
//         __builtin_printf("%s", "no gud");
// }