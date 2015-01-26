/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 14:20:13 by hhismans          #+#    #+#             */
/*   Updated: 2015/01/07 14:27:44 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  put a tab of char on a fd
*/
void	ft_puttab_fd(char **tab, int fd)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putendl_fd(tab[i], fd);
		i++;
	}
}
