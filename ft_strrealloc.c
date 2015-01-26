/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 17:46:54 by hhismans          #+#    #+#             */
/*   Updated: 2015/01/07 20:26:37 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Function :
** add "addtostr" at the end of str (free str and malloc a new string
** RETURN VALUE :
** 1 for succes, 0 for fail
*/
int		ft_strrealloc(char **str, char *addtostr)
{
	char *str_realloc;

	if (!(str_realloc = ft_strjoin(*str, addtostr)))
		return (0);
	free(*str);
	*str = str_realloc;
	return (1);
}
