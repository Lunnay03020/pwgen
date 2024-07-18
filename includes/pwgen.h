/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwgen.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:36:13 by vdoignie          #+#    #+#             */
/*   Updated: 2024/07/18 18:24:59 by vdoignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PWGEN_H
# define PWGEN_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <ctype.h>
# include <sys/time.h>
# include <math.h>

int		calcul(char c);
int		calcul_one(char c);
int		ft_params(char *c);
int		ft_strlen(char *c);
int		ft_atoi(char *c);
int		ft_random(void);
void	ft_putchar(char c);
void	ft_gen(int ki, int i);

#endif
