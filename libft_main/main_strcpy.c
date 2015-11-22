/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 20:52:17 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 21:03:46 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dst, const char *src);

int main()
{
	char src[40];
	char dest[100];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strcpy(dest, src);
	printf("Final copied string : %s\n", dest);

	memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "This is tutorialspoint.com");
	ft_strcpy(dest, src);
	printf("Final copied string : %s\n", dest);

	return(0);
}
