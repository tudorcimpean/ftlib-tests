/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 20:41:37 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 20:43:14 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n);

int main ()
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strncat(dest, src, 5);
	printf("Final destination string : |%s|\n", dest);

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	ft_strncat(dest, src, 5);
	printf("Final destination string : |%s|\n", dest);

	return(0);
}
