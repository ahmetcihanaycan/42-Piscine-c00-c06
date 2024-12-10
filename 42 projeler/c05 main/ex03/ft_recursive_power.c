/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaycan < ahaycan@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:19:51 by ahaycan           #+#    #+#             */
/*   Updated: 2024/07/22 22:20:31 by ahaycan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int    main(void)
{
    printf("%d", ft_recursive_power(3, 4));
    return(0);
}
