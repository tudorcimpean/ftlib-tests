/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 21:57:49 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:00:44 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2);

int main()
{
	const char haystack[20] = "TutorialsPoint";
	const char needle[10] = "Point";
	char *ret;

	ret = strstr(haystack, needle);
	printf("The substring is: %s\n", ret);

	ret = ft_strstr(haystack, needle);
	printf("The substring is: %s\n", ret);

	return(0);
}
