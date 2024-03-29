/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:11:53 by armendes          #+#    #+#             */
/*   Updated: 2020/08/13 12:38:55 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long int	i;

	i = (long int)nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
	}
	return ((int)nb);
}
