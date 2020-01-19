/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:17:33 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/26 18:43:11 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int c;

	c = nb;
	i = 1;
	if (c > 1 && c < 13)
	{
		while (i < c)
		{
			nb = nb * i;
			i++;
		}
	}
	else if (c == 1 || c == 0)
	{
		return (1);
	}
	else
		return (0);
	return (nb);
}
