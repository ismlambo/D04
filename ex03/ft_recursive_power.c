/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:19:43 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/17 15:20:17 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int b, int p)
{
    if( p == 0 )
    {
        return 1;
    }
    else
    {
        return b * power ( b, p-1 );
    }   
}
