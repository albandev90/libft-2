/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:21:39 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/13 22:45:23 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	int i = 0;
	if (src > dst)
	{
		while (len > i)
		{
			(unsigned char *)dst[i] = (unsigned char *)src[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			(unsigned char *)dst[len - 1] = (unsigned char *)src[len - 1];
			len--;
		}
	}
}