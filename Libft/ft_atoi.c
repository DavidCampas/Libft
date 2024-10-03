/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcampas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:03:49 by dcampas-          #+#    #+#             */
/*   Updated: 2024/09/24 16:28:30 by dcampas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;	
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
		if (nptr[i] == '+' || nptr[i] == '-')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int main(int argc, char** argv)
{
	if(argc > 1)
		ft_atoi(argv[1]);
		
	printf("%d\n",ft_atoi(argv[1]));
	printf("%d\n",atoi(argv[1]));
	return 0;
}*/
