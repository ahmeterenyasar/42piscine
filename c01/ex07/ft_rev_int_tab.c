/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:11:19 by ayasar            #+#    #+#             */
/*   Updated: 2024/07/06 15:22:12 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	last;
	int	i;
	int	temp;

	i = 0;
	last = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[last];
		tab[last] = temp;
		i++;
		last--;
	}
}
