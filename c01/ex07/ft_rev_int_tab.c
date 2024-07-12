/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsabri <bsabri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 08:31:04 by bsabri            #+#    #+#             */
/*   Updated: 2024/06/30 09:23:00 by bsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		b = tab[i];
		tab[i] = tab[a];
		tab[a] = b;
		i++;
		a--;
	}
}
