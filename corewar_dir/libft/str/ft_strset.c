/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 10:44:24 by enanrock          #+#    #+#             */
/*   Updated: 2017/11/03 13:42:07 by enanrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strset(char *str, char c, size_t length_str)
{
	size_t	i;

	i = 0;
	while (i < length_str)
	{
		str[i] = c;
		i++;
	}
}
