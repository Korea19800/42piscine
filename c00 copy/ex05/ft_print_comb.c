/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangjkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:38:22 by kangjkim          #+#    #+#             */
/*   Updated: 2022/06/03 10:00:50 by kangjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &" ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, &", ", 2);
	}
}

int	main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					if ((c - '0') * 10 + (d - '0')
						> (a - '0') * 10 + (b - '0'))
					{
						put_char(a, b, c, d);
					}
					else if ((c - '0') * 10 + (d - '0')
						< (a - '0') * 10 + (b - '0'))
					{
						if (b != '9')
						{
							c = a;
							d = b + 1;
						}
						else
						{
							c = a + 1;
							d = 0;
						}
						put_char(a, b, c, d);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
