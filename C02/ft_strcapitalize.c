/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:01:47 by ddyankov          #+#    #+#             */
/*   Updated: 2023/03/27 23:10:39 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{	
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{	
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] > 31 && str[i - 1] < 48)
				|| (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| (str[i - 1] > 122 && str[i - 1] < 127)))
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'A' && str [i - 1] <= 'Z')
				|| (str[i - 1] > 32 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 127)))
		{
			str[i] += 32;
		}
		i++;
	}	
	return (str);
}
