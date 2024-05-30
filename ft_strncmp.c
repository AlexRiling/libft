/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:39:30 by ariling           #+#    #+#             */
/*   Updated: 2024/05/30 16:39:33 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n--)
    {
        if (*s1 != *s2 || !*s1 || !*s2)
            return (*(unsigned char *)s1 - *(unsigned char *)s2);
        s1++;
        s2++;
    }
    return (0);
}
