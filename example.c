/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Test_login <debian_test@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:47:17 by Test_login        #+#    #+#             */
/*   Updated: 2025/07/21 23:01:38 by Test_login       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	char	*chain;

	chain = "Born to code and take coffe";
	while (*chain)
	{
		write(1, chain, 1);
		chain++;
	}
	return (0);
}
