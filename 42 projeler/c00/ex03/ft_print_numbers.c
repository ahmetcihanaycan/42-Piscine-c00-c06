/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaycan <ahaycan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:00:10 by ahaycan           #+#    #+#             */
/*   Updated: 2024/07/09 13:59:46 by ahaycan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	digits;

	digits = 48;
	while (digits < 58)
	{
		write(1, &digits, 1);
		digits++;
	}
}
