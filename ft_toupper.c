/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:52:51 by vuslysty          #+#    #+#             */
/*   Updated: 2018/10/25 15:01:03 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_toupper(int c)
{
	char	a;

	a = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		return ('A' + (a - 'a'));
	return (c);
}
