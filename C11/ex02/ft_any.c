/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:11:51 by armendes          #+#    #+#             */
/*   Updated: 2020/08/18 09:24:43 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int i;
	int tmp;

	i = 0;
	while (tab[i] != NULL)
	{
		tmp = (*f)(tab[i]);
		if (tmp != 0)
			return (1);
		i++;
	}
	return (0);
}
