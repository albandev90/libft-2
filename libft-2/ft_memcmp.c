/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:00:35 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/14 20:02:40 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

 int    ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    unsigned char *ss1;
    unsigned char *ss2;
    int i;

    i = -1;
    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    while (++i < n)
        if (ss1[i] != ss2[i])
            break ;
    return (ss1[i] - ss2[i]);
 }

//  int main()
//  {
//     printf("%d\n", ft_memcmp("azaa", "aaaa", 4));
//  }