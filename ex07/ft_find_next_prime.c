/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:25:04 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:25:12 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int ft_find_next_prime(int nb)
{
    int nbr;

    if(nb % 2 == 0)
    {
        nbr = nb;
    }
    else
    {
        nbr = nb + 1;
    }
    return(nbr);  
}
