/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 23:34:23 by ajoao             #+#    #+#             */
/*   Updated: 2025/10/02 00:13:40 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(const char *str)
{
 int i;
 
 i = 0;
 while (str[i] != '\0')
 {
  write(1, &str[i], 1);
  i++;
 }
 write(1, "\n", 1);
}

int ft_strcmp(const char *s1, const char *s2)
{
 int i;

 i = 0;
 while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0'))
 {
  i++;
 }
 return (s1[i] - s2[i]);
}

void ft_swap(int *a, int *b)
{
 int temp;

 temp = *a;
 *a = *b;
 *b = temp;
}

int main(int argc, const char **argv)
{
 int i;
 int j;
 int qty;
 int arg[argc];

 i = 1;
 qty = 1;
 while (qty < argc)
 {
  arg[qty] = qty;
  qty++;
 }
 while (i < argc)
 {
  j = i;
  while (j < argc)
  {
   if (ft_strcmp(argv[arg[i]], argv[arg[j]]) > 0)
   {
    ft_swap(&arg[i], &arg[j]);
    j++;
   }
   
  }
  ft_putstr(argv[arg[i++]]);
 }
 return 0;
}
