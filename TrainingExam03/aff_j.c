/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_j.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:34:52 by ajoao             #+#    #+#             */
/*   Updated: 2025/09/28 15:20:34 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	aff_j(int argc, char *argv)
{
	int	i;
	i = 0;
	if (argc != 1)
	{
		return (write(1, "j\n", 2));
	}
	while (argv[i] != '\0')
	{
		if (argv[i] == 'j')
		{
			return (write(1, "j\n", 2));
		}
		i++;
	}
	return (write(1, "J\n", 2));
}

int	main(void)
{
	int argc;
	char str[] = "Hello jWorld";

	argc = 2;
	aff_j(1, str); 
	return (0);
}
