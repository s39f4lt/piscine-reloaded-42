/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:17:03 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/22 15:59:48 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *minints;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	while (min != max)
	{
		i++;
		min++;
	}
	minints = (int*)malloc(i * sizeof(int));
	min = min - i;
	i = 0;
	while (min != max)
	{
		minints[i] = min;
		min++;
		i++;
	}
	return (minints);
}
