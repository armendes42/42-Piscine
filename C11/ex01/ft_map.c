/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:54:25 by armendes          #+#    #+#             */
/*   Updated: 2020/08/18 15:27:01 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_result;

	i = 0;
	if (!(tab_result = malloc(sizeof(int) * length + 1)))
		return (NULL);
	while (i < length)
	{
		tab_result[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_result);
}
