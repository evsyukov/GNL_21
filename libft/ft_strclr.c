/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smanta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:47:33 by smanta            #+#    #+#             */
/*   Updated: 2019/09/21 15:53:15 by smanta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	index;

	if (s == NULL)
		return ;
	index = 0;
	while (*(s + index) != '\0')
		*(s + index++) = '\0';
}
