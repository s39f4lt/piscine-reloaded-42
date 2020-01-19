/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:44:42 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/20 14:28:41 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int c;

	c = nb;
	if (c > 1 && c < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (c == 1 || c == 0)
	{
		return (1);
	}
	else
		return (0);
}
