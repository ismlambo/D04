/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:14:16 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:17:43 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int b, int p)
{
    int i;
    int result;

    i = 1;
    result = 1;
    while (i <= p)
    {
        result = result * b;
        i++;
    }
    return(result);
}

