/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 21:54:11 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 21:55:32 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int main ()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
