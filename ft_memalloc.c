/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:32:15 by vuslysty          #+#    #+#             */
/*   Updated: 2018/11/01 14:35:30 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
    void	*mem;

    mem = (t_byte*)malloc(size);
    if (mem == NULL)
        return (NULL);
    ft_bzero(mem, size);
    return (mem);
}
