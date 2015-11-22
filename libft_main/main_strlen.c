/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:02:47 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:04:14 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int main ()
{
	char str[50];
	int len;

	strcpy(str, "This is tutorialspoint.com");
	len = strlen(str);
	printf("Length of |%s| is |%d|\n", str, len);

	strcpy(str, "This is tutorialspoint.com");
	len = ft_strlen(str);
	printf("Length of |%s| is |%d|\n", str, len);

	return(0);
}
