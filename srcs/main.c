/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/17 16:27:23 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/17 23:44:12 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/pwgen.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		k;
	int		l;
	char	*m;

	i = 1;
	k = 0;
	if (argc == 1 || !isdigit(argv[argc - 1][0]))
	{
		printf("Missing lenght. Did you write it right ? Stop.\n");
		return (0);
	}
	m = argv[argc - 1];
	l = ft_atoi(m);
	if (l > 32 || l < 8)
	{
		printf("Invalid entry. Number must be between 8 and 32. Stop.\n");
		return (0);
	}
	if (argc == 2)
	{
		ft_gen(k, l);
		return (argc);
	}
	while (argv[i][0] == '-' && i < argc - 1)
	{
		k += ft_params(argv[i]);
		if (k == 0)
		{
			ft_gen(k, l);
			return (0);
		}
		i++;
	}
	ft_gen(k, l);
	return (0);
}
