/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:24:19 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/20 18:01:25 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac == 1)
		return (0);
	else if (ac > 1)
	{
		while (i <= (ac - 1))
		{
			while (av[i][j] != '\0')
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (0);
}
