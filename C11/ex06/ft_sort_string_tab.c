/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:58:30 by armendes          #+#    #+#             */
/*   Updated: 2020/08/13 18:49:31 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		count;
	int		nb_compare;
	char	*tmp;
	int		i;

	count = 0;
	i = 0;
	while (tab[i + 1])
		i++;
	nb_compare = i;
	while (nb_compare > 0)
	{
		while (count < nb_compare)
		{
			if (ft_strcmp(tab[count], tab[count + 1]) > 0)
			{
				tmp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = tmp;
			}
			count++;
		}
		nb_compare--;
		count = 0;
	}
}
