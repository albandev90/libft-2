/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:59:55 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/14 20:00:10 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char )c)
            return (&(((void *)s)[i]));
        i++;
    }
    return (NULL);
}