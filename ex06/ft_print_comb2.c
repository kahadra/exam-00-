/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:15:57 by chpark            #+#    #+#             */
/*   Updated: 2021/09/13 10:52:05 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_man(int t, int v)
{
	int	at;
	int	bt;
	int	cv;
	int	dv;

	at = (t / 10) + '0';
	bt = (t % 10) + '0';
	cv = (v / 10) + '0';
	dv = (v % 10) + '0';
	write (1, &at, 1);
	write (1, &bt, 1);
	write (1, " ", 1);
	write (1, &cv, 1);
	write (1, &dv, 1);
}

void	ft_print_comb2(void)
{
	int	t;
	int	v;

	t = 0;
	while (t <= 98)
	{
		v = t + 1;
		while (v <= 99)
		{
			ft_print_man(t, v);
			if (t != 98 || v != 99)
			{
				write(1, ", ", 2);
			}
			v++;
		}
		t++;
	}
}
