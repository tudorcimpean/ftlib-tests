/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 21:55:59 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 21:57:44 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main ()
{
	int len;
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
