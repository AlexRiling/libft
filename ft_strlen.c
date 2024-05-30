/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:37:06 by ariling           #+#    #+#             */
/*   Updated: 2024/05/27 17:02:10 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	lenght;

	lenght = 0;
	while (*c != '\0')
	{
		lenght += 1;
		c++;
	}
	return (lenght);
}

// int main(void)
// {
// 	char c[] = "Hello World";
// 	int result = ft_strlen(c);
// 	int result_buildin = strlen(c);
// 	printf("My own function : %d\n\n", result);
// 	printf("Build-in function : %d\n\n", result_buildin);
// }
