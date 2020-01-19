/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:51:26 by idunaver          #+#    #+#             */
/*   Updated: 2018/11/27 12:15:00 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *str1, char *str2)
{
	while ((*str1 == *str2) && str1)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **av1, char **av2)
{
	char *c;

	c = *av1;
	*av1 = *av2;
	*av2 = c;
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i != (ac - 1))
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (i <= (ac - 1))
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
