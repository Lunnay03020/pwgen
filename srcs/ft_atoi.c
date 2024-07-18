/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:30:02 by vdoignie          #+#    #+#             */
/*   Updated: 2024/07/17 23:33:13 by vdoignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pwgen.h"

int	ft_atoi(char *c)
{
	int	i;
	int	resultat;

	i = 0;
	resultat = 0;
	while (c[i] != '\0')
	{
		while (c[i] == '-' || c[i] == '+')
			i++;
		while (c[i] >= '0' && c[i] <= '9')
		{
			resultat = resultat * 10 + (c[i] - '0');
			i++;
		}
	}
	return (resultat);
}
