/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:18:15 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:18:26 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_recursive_factorial(int nbr)
{
    if(nbr <= 1){
        return 1;
    }
    else
    {
        return nbr * ft_recursive_factorial(nbr - 1);
    } 
}

