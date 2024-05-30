/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:42:21 by ariling           #+#    #+#             */
/*   Updated: 2024/05/29 23:42:22 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len) {
	unsigned char	*ptr;
	ptr = b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return b;
}
