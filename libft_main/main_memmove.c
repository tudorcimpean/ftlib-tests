/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:13:45 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 22:22:07 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int main ()
{
	const char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	const char dest1[] = "oldstring";
	const char src1[] = "newstring";
	
	printf("Before memmove dest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 9);
	printf("After memmove dest = %s, src = %s\n", dest1, src1);

	return(0);
}
