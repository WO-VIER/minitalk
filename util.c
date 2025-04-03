/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwautier <vwautier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:33:06 by vwautier          #+#    #+#             */
/*   Updated: 2025/02/23 18:49:04 by vwautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *string)
{
	int	csigne;
	int	number;
	int	i;

	i = 0;
	number = 0;
	csigne = 1;
	while ((string[i] == ' ' || (string[i] >= '\t' && string[i] <= '\r')))
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i++] == '-')
			csigne = -1;
	}
	while (string[i] >= '0' && string[i] <= '9')
		number = (number * 10) + (string[i++] - '0');
	return (number * csigne);
}
