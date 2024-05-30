/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:42:21 by ariling           #+#    #+#             */
/*   Updated: 2024/05/30 14:02:13 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len) {
    unsigned char *ptr = b;
    unsigned char value = (unsigned char)c;

    while (len--) {
        *ptr++ = value;
    }

    return b;
}
