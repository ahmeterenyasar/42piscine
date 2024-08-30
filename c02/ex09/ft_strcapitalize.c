/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:12:38 by ayasar            #+#    #+#             */
/*   Updated: 2024/07/08 13:13:21 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *car)
{
	int	i;

	i = 0;
	while (car[i])
	{
		if (car[i] >= 65 && car[i] <= 90)
		{
			car[i] += 32;
		}
		i++;
	}
	return (car);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	karar;

	i = 0;
	karar = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (karar == 1)
				str[i] -= 32;
			karar = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			karar = 0;
		else
			karar = 1;
		i++;
	}
	return (str);
}
