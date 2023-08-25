/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegarci2 <jegarci2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:04:17 by jegarci2          #+#    #+#             */
/*   Updated: 2023/05/18 16:41:21 by jegarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A')
		|| (c <= 'z' && c >= 'a'))
		return (1024);
	return (0);
}

/*
int main(void)
{
  int c1 = '3';
  int c2 = 'a';
  int c3 = 'T';
  int c4 = '&';

  printf("%d\n", ft_isalpha(c1)); // 0
  printf("%d\n", isalpha(c1)); // 0
  printf("%d\n", ft_isalpha(c2)); // 1
  printf("%d\n", isalpha(c2)); // 1
  printf("%d\n", ft_isalpha(c3)); // 1
  printf("%d\n", isalpha(c3)); // 1
  printf("%d\n", ft_isalpha(c4)); // 0 
  printf("%d\n", isalpha(c4)); // 0 
  
  return (0);
*/