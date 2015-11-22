/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:22:11 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:26:53 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");
	ret = strcmp(str1, str2);
	if(ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}

	printf("and now for your function:\n");
	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");
	ret = ft_strcmp(str1, str2);
	if(ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	return(0);
}
