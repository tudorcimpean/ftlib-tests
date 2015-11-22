/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:32:40 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:35:14 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);

int main()
{
	int val;
	char str[20];

	strcpy(str, "-a98993a89");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "-a98993a89");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	return(0);
}
