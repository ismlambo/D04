/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:09:02 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:11:28 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_factorial(int nbr)
{
    int     i;
    int     product;

    i = 1;
    product = 1;
    while(i <= nbr)
    {
        product = i * product;
        i++;
    }
    return product;
}
