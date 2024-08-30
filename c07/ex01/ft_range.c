/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:36:28 by ayasar            #+#    #+#             */
/*   Updated: 2024/07/20 09:13:42 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	range;
	int	*result;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	result = (int *)malloc((range) * sizeof(int));
	while (i < max)
	{
		result[j] = i;
		i++;
		j++;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int min = 5;
	int max = 9;
	int *tab = ft_range(min, max);
	int i = 0;
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
}
