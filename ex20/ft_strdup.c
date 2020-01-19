/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:36:15 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/27 12:27:46 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dsrc;

	i = 0;
	while (src[i] != '\0')
		i++;
	dsrc = (char*)malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dsrc[i] = src[i];
		i++;
	}
	dsrc[i] = '\0';
	return (dsrc);
}
