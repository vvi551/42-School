/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 22:02:46 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/24 22:28:27 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((str[i] == '') || (str[i] == '\t') || (str[i] == '\n')
	 || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
		if (str[i] == 45)
			negativ = 1;
		if ((str[i] == 45)) || (str[i] == 43)
		i++;
		while (str[i] >= 48 && str[i] <= 57)
		{

			number *= 10;
			number += ((int)str[i] - 48);
			i++;
		}
		if (negativ == 1)
			return (-number);
			else
			return (number);
}
