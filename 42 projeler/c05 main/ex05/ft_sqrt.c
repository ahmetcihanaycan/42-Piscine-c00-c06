/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaycan < ahaycan@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:19:55 by ahaycan           #+#    #+#             */
/*   Updated: 2024/07/23 14:36:32 by ahaycan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
			i++;
	}
	return (0);
}

#include <stdio.h>

int    main(void)
{
    printf("%d", ft_sqrt(46339));
    return(0);
}
