/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:04:35 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:08:15 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);
	ret = memcmp(str1, str2, 5);
	if(ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if(ret < 0) 
	{
		printf("str1 is less than str2\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}

	printf("now for your funtion:\n");

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if(ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if(ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}

	return(0);
}
