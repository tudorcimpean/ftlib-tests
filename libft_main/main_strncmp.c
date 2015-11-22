/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:27:33 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:31:57 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main ()
{
	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
	int n;
	puts ("Looking for R2 astromech droids...");
	for (n=0 ; n<3 ; n++)
		if (strncmp (str[n],"R2xx",2) == 0)
		{
			printf ("found %s\n",str[n]);
		}

	printf("and now for your funtion:\n");
	puts ("Looking for R2 astromech droids...");
	for (n=0 ; n<3 ; n++)
		if (ft_strncmp (str[n],"R2xx",2) == 0)
		{
			printf ("found %s\n",str[n]);
		}
	return 0;
}
