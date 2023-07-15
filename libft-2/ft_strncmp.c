/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:43:33 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/13 10:45:46 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i] && i < n)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int main(void)
// {
//     char x[]="demose";
//     char y[]="demoge";
//     printf("%d\n", ft_strncmp(x,y,5));
// }
