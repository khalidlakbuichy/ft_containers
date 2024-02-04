/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:26:51 by khalid            #+#    #+#             */
/*   Updated: 2024/02/04 12:42:26 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
    t_stack *a;
    
    a = ft_stack_create();
    printf("bool value: %d\n", ft_stack_push(a, strdup("Hello")));
    printf("bool value: %d\n", ft_stack_push(a, strdup("Hello")));
    printf("bool value: %d\n", ft_stack_push(a, strdup("Hello")));
    printf("bool value: %d\n", ft_stack_push(a, strdup("Hello")));
    printf("bool value: %d\n", ft_stack_push(a, strdup("Hello")));
    printf("bool value: %d\n", ft_stack_push(a, strdup("final")));
    ft_stack_pop(a, free);
    char *str = ft_stack_top(a);
    puts(str);
    ft_stack_clear(a, del);
    // printf("size: %d\n", ft_stack_size(a));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_pop(a, free));
    // printf("bool value: %d\n", ft_stack_top(a));
    printf("size: %d\n", ft_stack_size(a));
}