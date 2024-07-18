/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:09:27 by vdoignie          #+#    #+#             */
/*   Updated: 2024/07/17 23:10:59 by vdoignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pwgen.h"

int	calcul(char c)
{
	if (c == 'a')
		return (1);
	else if (c == 'n')
		return (4);
	else if (c == 's')
		return (8);
	else
		return (0);
}

int	calcul_one(char c)
{
	int	j;

	if (c == '-')
		return (99);
	else
	{
		j = calcul(c);
		if (j == 0)
			return (0);
		return (j);
	}
}

int	ft_params(char *c)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 1;
	j = 0;
	k = ft_strlen(c);
	l = 0;
	if (k == 2)
	{
		l = calcul_one(c[i]);
		return (l);
	}
	while (c[i] != '\0' && c[i] != c[0] && i < 4)
	{
		j = calcul(c[i]);
		if (j == 0)
			return (0);
		i++;
		l = l + j;
	}
	if (i > 4)
		return (0);
	return (l);
}
