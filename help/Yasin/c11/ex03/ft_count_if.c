/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:29:25 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/01 10:40:04 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
}
