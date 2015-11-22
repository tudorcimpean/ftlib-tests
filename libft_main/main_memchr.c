/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:08:23 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:13:38 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main ()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}




















