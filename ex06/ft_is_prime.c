/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:23:45 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:23:51 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
    if(nb % 2 != 0)
    {
        return(0);
    }
    else
    {
        return(1);
    }
    
}
