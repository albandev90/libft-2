/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:03:37 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/14 20:03:52 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char * strchr(const char *s, int c)
 {
    int i;
    i = 0;

    while (s[i])
    {
        if (s[i]==(char *)c)
            return (s+i);
        i++;
    }
 }
 