/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:48:05 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/13 22:18:46 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void * memset(void *b, int c, size_t len)
 {
    unsigned char *str;

    if(!b)
        return (NULL);
    str = (unsigned char *)b;
    while (len != 0)
    {
        *str = (unsigned char)c;
        str++;
        len--;
    }
    return (b);
 }