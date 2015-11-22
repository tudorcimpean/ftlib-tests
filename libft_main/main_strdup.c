/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 21:06:29 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 21:08:22 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strdup(const char *s1);

int main( void )
{
	char *dup;

	dup = strdup( "Make a copy" );
	printf( "%s\n", dup );
	free (dup);

	dup = ft_strdup( "Make a copy" );
	printf( "%s\n", dup );
	free (dup);

	return EXIT_SUCCESS;
}
