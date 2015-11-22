/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 20:07:13 by trad              #+#    #+#             */
/*   Updated: 2015/11/22 20:19:28 by trad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char    *s;
	int     n;
	char    **a;
	int     j;
	int     i;
	int     tet;

	s = (char *)malloc(sizeof(char) * 100);
	strcpy(s, "*eee*asd*asd***ioii");
	a = (char **)malloc(sizeof(char *) * 10);
	for (i = 0; i < 10; i++)
		a[i] = (char *)malloc(sizeof(char) * 10);
	a = ft_strsplit(s, '*');
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (a[i][j])
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
