/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:01:37 by ayasar            #+#    #+#             */
/*   Updated: 2024/07/17 17:01:40 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	index;
	int	*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	result = (int *)malloc((i) * sizeof(int));
	if (!result)
	{
		*range = 0;
		return (-1);
	}
	index = 0;
	while (index < i)
	{
		result[index] = min + index;
		index++;
	}
	*range = result;
	return (i);
}

#include <stdio.h>
int main()
{
	int min = 5;
	int max = 9;
	int **tab;
   	int a = ft_ultimate_range(tab, min, max);
	
	printf("%d", a);
}
