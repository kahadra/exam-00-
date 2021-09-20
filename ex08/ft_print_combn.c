/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:24:12 by chpark            #+#    #+#             */
/*   Updated: 2021/09/18 10:50:33 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int *str, int n)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (++i < n)
	{
		if (str[i - 1] >= str[i])
			check = 0;
	}
	if (!check)
		return ;
	i = 0;
	while (i < n)
	{
		ft_putchar(str[i] + 48);
		i++;
	}
	if (str[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	str[10];

	i = 0;
	while (i < n)
	{
		str[i] = i;
		i++;
	}
	while (str[0] <= (10 - n))
	{
		ft_printnbr(str, n);
		str[n - 1]++;
		i = n;
		while (i > 1)
		{
			i--;
			if (str[i] > 9)
			{
				str[i - 1]++;
				str[i] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
