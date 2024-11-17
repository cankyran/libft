alughflajfşasf************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucankir <mucankir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:47:58 by mucankir          #+#    #+#             */
/*   Updated: 2024/11/16 20:57:19 by mucankir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
		ft_putchar_fd(*s++, fd);
}

#include <fcntl.h>

int main()
{
	int fd = open("ft_putstr_fd.c", O_RDWR, 0777);
	ft_putstr_fd("alughflajfşasf", fd);
}
