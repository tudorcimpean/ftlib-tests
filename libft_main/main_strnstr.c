/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:54:22 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:01:47 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

int main(void)
{
	char *searchingFor = "stackdummy";
	char *in = "la da\ndoo stackdummy the stack\nok there it was.\n";

	printf("found: %s\n", strnstr(in, searchingFor, 25) ? "yes" : "no");
	printf("found: %s\n", strnstr(in, searchingFor, 25) ? "yes" : "no");
	printf("found: %s\n", strnstr(in, searchingFor, 25) ? "yes" : "no");

	printf("and now for your funtion:\n");
	printf("found: %s\n", ft_strnstr(in, searchingFor, 25) ? "yes" : "no");
	printf("found: %s\n", ft_strnstr(in, searchingFor, 25) ? "yes" : "no");
	printf("found: %s\n", ft_strnstr(in, searchingFor, 25) ? "yes" : "no");
	return 0;
}
