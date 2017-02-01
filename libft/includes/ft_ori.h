/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ori.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:03:18 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/27 05:08:52 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ORI_H
# define FT_ORI_H

/*
**	typedef	unsigned long size_t;
*/
# include <string.h>

char					*ft_str_return_extract_line_behind_sep\
						(char *str, char c);

void					ft_str_cut_includ_behind_sep(char *str, char c);

int						ft_str_resize_concat(char **str, char *cp);

void					ft_bzero(void *s, size_t n);

void					ft_memdel(void **ap);

char					*ft_strcat(char *s1, const char *s2);

char					*ft_strcpy(char *dst, const char *src);

char					*ft_strdup(const char *s1);

size_t					ft_strlen(const char *s);

#endif
