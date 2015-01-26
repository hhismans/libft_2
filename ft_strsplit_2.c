/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 23:24:51 by hhismans          #+#    #+#             */
/*   Updated: 2015/01/22 08:16:23 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	**bigger_array(char **array, int len)
{
	char	**new_array;

	new_array = (char **)malloc(sizeof(char *) * (len + 1));
	if (array != NULL)
	{
		while (len > 0)
		{
			new_array[len - 1] = array[len - 1];
			len--;
		}
		free(array);
	}
	return (new_array);
}

static unsigned int	set_begin_end(char const *s, unsigned int *begin,
		int *i)
{
	int end;

	while (s[*i] && ft_isblank(s[*i]))
		(*i)++;
	*begin = *i;
	while (s[*i] && !ft_isblank(s[*i]))
		(*i)++;
	end = *i - 1;
	return (end);
}

char			**ft_strsplit_blank(char const *s)
{
	int				i;
	int				j;
	unsigned int	begin;
	unsigned int	end;
	char			**res;

	begin = 0;
	end = 0;
	res = NULL;
	j = 0;
	i = 0;
	while (s[i])
	{
		end = set_begin_end(s, &begin, &i);
		if (!i)
			return (NULL);
		res = bigger_array(res, j);
		res[j] = ft_strsub(s, begin, (size_t) (end - begin + 1));
		j++;
	}
	res = bigger_array(res, j);
	res[j] = NULL;
	return (res);
}
