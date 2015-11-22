/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 20:25:15 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 20:38:05 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int main()
{
	int var1 = 'd';
	int var2 = var1;

	if( isalpha(var1) )
	{
		printf("var1 = |%c| is an alphabet\n", var1 );
	}
	else
	{
		printf("var1 = |%c| is not an alphabet\n", var1 );
	}

	if( ft_isalpha(var2) )
	{
		printf("var2 = |%c| is an alphabet\n", var2 );
	}
	else
	{
		printf("var2 = |%c| is not an alphabet\n", var2 );
	}

	return 0;
}
