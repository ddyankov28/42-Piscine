/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:47:33 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/17 13:51:15 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (*to_find == '\0')
		return (str);
	while (str[a] != '\0')
	{
		if (*str == *to_find)
		{	
			a = 0;
			b = 0;
			while (to_find[a] != '\0')
			{
				if (str[a] != to_find[a])
					b = 1;
				a++;
			}
			if (b == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
