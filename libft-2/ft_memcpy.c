/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:21:10 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/13 22:21:20 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void * dst, const void * src, size_t n)
{
    char *d;
    char *s;

    if (!dst && !src)
        return (NULL);
    d = (char *)dst;
    s = (char *)src;
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dst);
}
