/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_return_extract_line_behind_sep.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 21:55:30 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/27 04:58:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ori.h"

char		*ft_str_return_extract_line_behind_sep(char *str, char c)
{
	int		count;
	int		count2;
	char	*str2;

	count2 = 0;
	count = 0;
	while (str[count] != c)
		count++;
	if (!(str2 = malloc(sizeof(char) * (count + 1))))
		return (0);
	ft_bzero(str2, count);
	while (count2 < count)
	{
		str2[count2] = str[count2];
		count2++;
	}
	str2[count] = '\0';
	return (str2);
}
