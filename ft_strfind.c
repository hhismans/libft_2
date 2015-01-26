/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:46:36 by hhismans          #+#    #+#             */
/*   Updated: 2015/01/07 10:55:18 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if to_find is in str
** else return (0)
*/
int		ft_strfind(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (!to_find[j])
				return (1);
		}
		i++;
	}
	return (0);
}
