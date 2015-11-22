/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 20:39:08 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 20:40:55 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2);

int main ()
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	ft_strcat(dest, src);
	printf("Final destination string : |%s|", dest);

	return(0);
}
