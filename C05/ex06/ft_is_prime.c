/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:13:51 by armendes          #+#    #+#             */
/*   Updated: 2020/08/13 12:41:56 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long i;
	long n;

	i = 5;
	n = (long)nb;
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	while (i * i <= n)
	{
		if ((n % i) == 0 || (n % (i + 2)) == 0)
			return (0);
		i += 6;
	}
	return (1);
}