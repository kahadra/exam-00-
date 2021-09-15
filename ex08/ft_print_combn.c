/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:24:12 by chpark            #+#    #+#             */
/*   Updated: 2021/09/15 19:24:16 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if(a[i] 
		a[i] = i


void	ft_printnbr(int *a, int n)
{
	int	i;
	
	*a = 
	i = 0;
	while (i < n)
	{
		ft_putchar(a[i]);
		i++;
	}
	ft_putchar(",");
	ft_putchar(" ");
}

