/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:48:11 by armendes          #+#    #+#             */
/*   Updated: 2020/08/19 16:04:19 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	g_verif = 0;

void	disp(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putnbr(g_tab[i][j]);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		solve(int **tab, int row, int col)
{
	int val;

	val = 0;
	while (++val <= 4)
	{
		if (place(row, col, val))
		{
			g_tab[row][col] = val;
			if (col == 3 && place_row(tab[2], row) && place_row_r(tab[3], row))
			{
				if (row == 3 && place_col(tab[0]) && place_col_r(tab[1]))
				{
					g_verif++;
					if (g_verif == 1)
						disp();
					return (g_verif);
				}
				solve(tab, row + 1, 0);
			}
			else
				solve(tab, row, col + 1);
		}
	}
	return (g_verif);
}

int		main(int ac, char **av)
{
	int		**tab;

	if (ac == 2)
	{
		if (verif_arg(av[1]))
		{
			tab = cut(av[1], 0);
			if (!solve(tab, 0, 0))
				ft_putstr("Error\n");
			free(tab[0]);
			free(tab[1]);
			free(tab[2]);
			free(tab[3]);
			free(tab);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
}
