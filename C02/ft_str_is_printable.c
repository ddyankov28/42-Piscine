/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:41:04 by ddyankov          #+#    #+#             */
/*   Updated: 2022/09/12 11:45:36 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] >= 32 && str[a] <= 126)
	{
		a++;
	}
	if (str[a] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}