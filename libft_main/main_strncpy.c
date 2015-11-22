/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 21:04:09 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 21:05:26 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n);

int main()
{
	char src[40];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strncpy(dest, src, 10);
	printf("Final copied string : %s\n", dest);

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	ft_strncpy(dest, src, 10);
	printf("Final copied string : %s\n", dest);

	return(0);
}
