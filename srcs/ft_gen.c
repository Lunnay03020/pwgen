/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_gen.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/17 16:09:27 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/18 19:09:02 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/pwgen.h"

int	ft_random(void)
{
	int				i;
	int				j;
	int				k;
	int				millisec;
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	millisec = tv.tv_usec / 1000;
	if (millisec >= 1000)
	{
		millisec -= 1000;
		tv.tv_sec++;
	}
	srand(time(NULL) * millisec);
	j = 2147483647 - rand();
	k = j % rand() * 45;
	i = j * k;
	return (i);
}

void	ft_gen(int k, int i)
{
	char	randchar;
	int		j;
	int		randnum;
	int		random;
	char	*numbers;
	char	*letterminus;
	char	*lettermaximus;
	char	*special;

	randchar = ' ';
	j = 0;
	randnum = 0;
	random = 0;
	numbers = "1943627508";
	letterminus = "aqwzsxedcrfvtgbyhnujikolpm";
	lettermaximus = "AQWZSXEDCRFVTGBYHNUJIKOLPM";
	special = "!@#$^&*?";
	srand((unsigned int)ft_random());
	while (j < i)
	{
		if (k == 0 || k == 1)
		{
			random = 2 * (rand() / (RAND_MAX + 1.0));
			if (random == 1)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = letterminus[randnum];
				ft_putchar(randchar);
			}
			else
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = lettermaximus[randnum];
				ft_putchar(randchar);
			}
		}
		else if (k == 4)
		{
			randnum = 10 * (rand() / (RAND_MAX + 1.0));
			randchar = numbers[randnum];
			ft_putchar(randchar);
		}
		else if (k == 5)
		{
			random = 3 * (rand() / (RAND_MAX + 1.0));
			if (random == 1)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = letterminus[randnum];
				ft_putchar(randchar);
			}
			else if (random == 2)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = lettermaximus[randnum];
				ft_putchar(randchar);
			}
			else
			{
				randnum = 10 * (rand() / (RAND_MAX + 1.0));
				randchar = numbers[randnum];
				ft_putchar(randchar);
			}
		}
		else if (k == 8)
		{
			randnum = 8 * (rand() / (RAND_MAX + 1.0));
			randchar = special[randnum];
			ft_putchar(randchar);
		}
		else if (k == 9)
		{
			random = 3 * (rand() / (RAND_MAX + 1.0));
			if (random == 1)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = letterminus[randnum];
				ft_putchar(randchar);
			}
			else if (random == 2)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = lettermaximus[randnum];
				ft_putchar(randchar);
			}
			else
			{
				randnum = 8 * (rand() / (RAND_MAX + 1.0));
				randchar = special[randnum];
				ft_putchar(randchar);
			}
		}
		else if (k == 12)
		{
			random = 2 * (rand() / (RAND_MAX + 1.0));
			if (random == 1)
			{
				randnum = 8 * (rand() / (RAND_MAX + 1.0));
				randchar = special[randnum];
				ft_putchar(randchar);
			}
			else
			{
				randnum = 10 * (rand() / (RAND_MAX + 1.0));
				randchar = numbers[randnum];
				ft_putchar(randchar);
			}
		}
		else
		{
			random = 4 * (rand() / (RAND_MAX + 1.0));
			if (random == 1)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = letterminus[randnum];
				ft_putchar(randchar);
			}
			else if (random == 2)
			{
				randnum = 26 * (rand() / (RAND_MAX + 1.0));
				randchar = lettermaximus[randnum];
				ft_putchar(randchar);
			}
			else if (random == 3)
			{
				randnum = 8 * (rand() / (RAND_MAX + 1.0));
				randchar = special[randnum];
				ft_putchar(randchar);
			}
			else
			{
				randnum = 10 * (rand() / (RAND_MAX + 1.0));
				randchar = numbers[randnum];
				ft_putchar(randchar);
			}
		}
		j++;
	}
	ft_putchar('\n');
}
