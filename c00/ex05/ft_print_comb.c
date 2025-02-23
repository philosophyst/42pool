/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:27:40 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/16 20:33:29 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '2';
	while (arr[0] <= '7')
	{
		write(1, arr, 3);
		write(1, ", ", (arr[0] != '7') * 2);
		arr[2] += 1;
		if (arr[2] > '9')
			arr[2] = ++arr[1] + 1;
		if (arr[1] > '8')
		{
			arr[1] = ++arr[0] + 1;
			arr[2] = arr[1] + 1;
		}
	}
}
