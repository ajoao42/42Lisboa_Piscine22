/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_J.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:22:27 by ajoao             #+#    #+#             */
/*   Updated: 2025/09/28 16:39:39 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char aff_j(int ac, char **av)
{
 int i = 0;

 if (ac == 2)
 {
  while (av[1][i])
  {
    if (av[1][i] == 'j')
    {
     return (write(1, "j\n", 2), 0);
    }
    i++;
  }
  write(1, "j\n", 2);
  return (0);
 }

}
int main()
{
 int i = 1;
 char str[12] = "Hello World";
 //aff_j(i, str);
 return (0);
 
}